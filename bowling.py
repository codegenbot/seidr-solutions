def calculate_score(bowls):
    score = 0
    frame = 1
    bowlIndex = 0
    
    while frame <= 10:
        if bowls[bowlIndex] == 'X':
            score += 10
            if bowls[bowlIndex + 2] == 'X':
                score += 10
                if bowls[bowlIndex + 4] == 'X':
                    score += 10
                else:
                    score += int(bowls[bowlIndex + 4])
            else:
                score += int(bowls[bowlIndex + 2]) + int(bowls[bowlIndex + 3])
            bowlIndex += 2
        elif bowls[bowlIndex + 1] == '/':
            score += 10
            if bowls[bowlIndex + 2] == 'X':
                score += 10
            else:
                score += int(bowls[bowlIndex + 2])
            bowlIndex += 2
        else:
            score += int(bowls[bowlIndex]) + int(bowls[bowlIndex + 1])
            bowlIndex += 2
        frame += 1
    
    return score

bowls = input().strip()
print(calculate_score(bowls))