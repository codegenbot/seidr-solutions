def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = [0] * 10
    i = 0

    while i < len(bowls):
        if bowls[i] == 'X':
            frame_score[frame-1] = 10
            score += 10
            if frame < 10:
                if i + 2 < len(bowls):
                    if bowls[i+2] == '/':
                        score += 10
                    else:
                        score += int(bowls[i+1]) + int(bowls[i+2])
                if i + 1 < len(bowls) and bowls[i+1] == 'X':
                    score += 10
        elif bowls[i] == '/':
            frame_score[frame-1] = 10 - int(bowls[i-1])
            score += 10 - int(bowls[i-1])
            if frame < 10:
                if i + 1 < len(bowls):
                    score += int(bowls[i+1])
        else:
            frame_score[frame-1] = int(bowls[i])
            score += int(bowls[i])

        if bowls[i] != 'X' and bowls[i] != '/':
            if frame < 10:
                if i + 1 < len(bowls):
                    if bowls[i+1] == '/':
                        score += 10 - frame_score[frame-1]
        i += 1

        if i % 2 == 0:
             frame += 1

    return score

bowls = input().strip()
print(calculate_score(bowls))