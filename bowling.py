```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            roll = int(game[i] + game[i+1])
            if roll == 10:
                if frame < 9:
                    score += roll
                    score += int(game[i-2:i])
                else:
                    score += roll
            elif roll > 10:
                score += 10
                if int(game[i-1]) != '0':
                    score += int(game[i-1])
        elif game[i].isdigit():
            roll = int(game[i])
            if frame < 9 and roll == 10:
                score += roll
                score += int(game[:i])
            else:
                score += roll
        else:
            if game[i] == 'X':
                score += 10
                if frame < 9:
                    score += 10
            elif game[i] == '/':
                left_roll = 10 - int(game[i-1])
                right_roll = int(game[i-2:i])
                score += left_roll + right_roll
        frame += (roll > 0)
    return score