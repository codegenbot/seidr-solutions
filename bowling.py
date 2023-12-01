def bowling_score(bowls):
    score = 0
    frame = 1
    i = 0
    while frame <= 10:
        if bowls[i] == 'X':
            score += 10
            if bowls[i+2] == 'X':
                score += 10
                if bowls[i+4] == 'X':
                    score += 10
                else:
                    score += int(bowls[i+4])
            elif bowls[i+2] == '/':
                score += 10
            else:
                score += int(bowls[i+2]) + int(bowls[i+3])
            i += 2
        elif bowls[i+1] == '/':
            score += 10
            if bowls[i+2] == 'X':
                score += 10
            else:
                score += int(bowls[i+2])
            i += 2
        else:
            score += int(bowls[i]) + int(bowls[i+1])
            i += 2
        frame += 1
    return score