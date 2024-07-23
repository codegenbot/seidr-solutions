def bowling_score(bowls):
    score = 0
    ball = 0
    frame = 1
    
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
            if frame < 10:
                if i + 2 < len(bowls) and bowls[i + 2] == 'X':
                    score += 10
                else:
                    if i + 1 < len(bowls):
                        if bowls[i + 1] == 'X':
                            score += 10
                        else:
                            score += int(bowls[i + 1])
                    if i + 2 < len(bowls):
                        if bowls[i + 2] == '/':
                            score += 10 - int(bowls[i + 1])
                        elif bowls[i + 2] != 'X':
                            score += int(bowls[i + 2])
                frame += 1
        elif bowls[i] == '/':
            score += 10 - int(bowls[i - 1])
            if frame < 10:
                if i + 1 < len(bowls) and bowls[i + 1] == 'X':
                    score += 10
                else:
                    if i + 1 < len(bowls) and bowls[i + 1] != 'X':
                        score += int(bowls[i + 1])
                frame += 1
        elif bowls[i] == '-':
            score += 0
            if frame < 10:
                frame += 1
        else:
            score += int(bowls[i])
            if frame < 10:
                frame += 1
    
    return score

bowls = input().replace(" ", "")
print(bowling_score(bowls))