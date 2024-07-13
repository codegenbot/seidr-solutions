```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll == 10: 
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
        else:
            first_roll = int(frame[0])
            if frame[0] == 'X':
                roll = 10
                score += 10
            else:
                roll = int(frame[0])
                score += roll
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if second_roll + third_roll == 10:
                score += roll + 10
            elif frame[1] == 'X':
                score += roll + 10
            else:
                score += roll + second_roll
    return score