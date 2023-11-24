def bowling(bowls):
    score = 0
    frame = 1
    bonus = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
            if i + 2 < len(bowls):
                if bowls[i + 2] == '/':
                    score += 10
                elif bowls[i + 1] != '-':
                    score += int(bowls[i + 1])
                if bowls[i + 1] == 'X' and bowls[i + 2] != '-':
                    score += int(bowls[i + 2])
            frame += 1
        elif bowls[i] == '/':
            score += 10 - int(bowls[i - 1])
            if i + 1 < len(bowls) and bowls[i + 1] != '-':
                score += int(bowls[i + 1])
            frame += 1
        elif bowls[i] != '-':
            score += int(bowls[i])
            if i + 1 < len(bowls) and bowls[i + 1] != '-':
                score += int(bowls[i + 1])
            frame += 1
    return score