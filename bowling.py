def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    i = 0
    while i < len(bowls):
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                if i + 2 < len(bowls):
                    if bowls[i+2] == 'X':
                        score += 10
                    else:
                        score += int(bowls[i+2])
                if i + 3 < len(bowls):
                    if bowls[i+3] == '/':
                        score += 10
                    elif bowls[i+3] == 'X':
                        score += 10
                    else:
                        score += int(bowls[i+3])
            frame += 1
            i += 1
        elif bowls[i] == '/':
            score += 10 - frame_score
            if frame < 10:
                if i + 1 < len(bowls):
                    if bowls[i+1] == 'X':
                        score += 10
                    else:
                        score += int(bowls[i+1])
            frame_score = 0
            frame += 1
        else:
            score += int(bowls[i])
            frame_score = int(bowls[i])
            if frame_score == 10 and frame < 10:
                score += int(bowls[i+1])
            frame_score = 0
            frame += 1
        i += 1
    return score

bowls = input().strip()
print(calculate_score(bowls))