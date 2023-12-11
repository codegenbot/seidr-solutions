def calculate_score(frames):
    score = 0
    frame = 1
    i = 0

    while frame <= 10:
        if frames[i] == 'X':
            score += 10
            if frames[i+2] == 'X':
                score += 10
                if frames[i+4] == 'X':
                    score += 10
                else:
                    score += int(frames[i+4])
            else:
                score += int(frames[i+2]) + int(frames[i+3])
            i += 2
        elif frames[i+1] == '/':
            score += 10
            if frames[i+3] == 'X':
                score += 10
            else:
                score += int(frames[i+3])
            i += 2
        else:
            score += int(frames[i]) + int(frames[i+1])
            i += 2

        frame += 1

    return score


frames = input()
print(calculate_score(frames))