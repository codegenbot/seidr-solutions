```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    
    for char in game:
        if char == 'X':
            score += 30
            roll = 2
        elif char == '/':
            continue
        else:
            if int(char) > 9:
                score += 10 + (int(char) - 10)
                roll = 1
            else:
                score += int(char)
                roll -= 1
        if roll == 0:
            frame += 1

    return score