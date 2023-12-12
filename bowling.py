def calculate_score(bowls):
    score = 0
    frame = 1
    i = 0
    
    while frame <= 10:
        if bowls[i] == 'X' and i + 2 < len(bowls):
            score += 10
            if bowls[i + 1] == 'X' and bowls[i + 2] == 'X':
                score += 20
            else:
                score += 10
        elif bowls[i] == '/' and i - 1 >= 0 and bowls[i - 1] != '/':
            score += 10 - int(bowls[i - 1]) + int(bowls[i + 1])
        else:
            score += int(bowls[i])
        i += 1
        frame += 1
    
    return score

bowls = input()
print(calculate_score(bowls))