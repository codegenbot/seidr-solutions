```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    while frame <= 10:
        if game[roll] == 'X':
            score += 30
            roll += 1
            frame += 1
        elif game[roll:roll+2].isdigit():
            strike_frame = int(game[roll:roll+2])
            score += strike_frame
            roll += 2
            if frame < 10:
                if game[roll] == 'X':
                    score += 30
                    roll += 1
                    frame += 1
                elif game[roll:roll+2].isdigit():
                    spare_frame = int(game[roll:roll+2])
                    score += spare_frame
                    roll += 2
                    frame += 1
        else:
            if game[roll] == '/':
                bonus = 10 - int(game[roll-1])
                score += bonus
                roll += 3
            elif game[roll:roll+2].isdigit():
                score += int(game[roll:roll+2])
                roll += 2
                frame += 1
    return score