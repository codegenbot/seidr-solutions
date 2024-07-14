```
def bowling_score(game):
    score = 0
    frame = 1
    for roll in game:
        if roll == 'X':
            score += 30
            frame -= 1
        elif roll == '/':
            score += 10 + int(roll[1])
            frame -= 1
        else:
            if frame < 9:
                score += min(int(roll), 10)
                if frame < 8 and str(min(int(roll), 10)) in game[frame*2-1:frame*2+2]:
                    score += int(roll)
                frame += 1
            else:
                score += int(roll) + int(game[9])
    return score