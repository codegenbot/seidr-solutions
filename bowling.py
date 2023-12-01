def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    i = 0
    while i < len(bowls):
        if frame == 10:
            if bowls[i] == 'X':
                score += 10
                if bowls[i+1] == 'X':
                    score += 10
                    if bowls[i+2] == 'X':
                        score += 10
                    else:
                        score += int(bowls[i+2])
                else:
                    score += int(bowls[i+1])
                    if bowls[i+2] == '/':
                        score += 10 - int(bowls[i+1])
                    else:
                        score += int(bowls[i+2])
                i += 1
            elif bowls[i] == '/':
                score += 10 - frame_score
                if bowls[i+1] == 'X':
                    score += 10
                else:
                    score += int(bowls[i+1])
                i += 1
            else:
                score += int(bowls[i])
            i += 1
        else:
            if bowls[i] == 'X':
                score += 10
                if bowls[i+2] == 'X':
                    score += 10
                else:
                    score += int(bowls[i+2])
                if bowls[i+4] == 'X':
                    score += 10
                else:
                    score += int(bowls[i+4])
                i += 1
            elif bowls[i+1] == '/':
                score += 10
                if bowls[i+2] == 'X':
                    score += 10
                else:
                    score += int(bowls[i+2])
                i += 2
            else:
                frame_score = int(bowls[i]) + int(bowls[i+1])
                score += frame_score
                i += 2
            frame += 1
    return score

bowls = input()
print(calculate_score(bowls))