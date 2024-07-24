```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame[0]) * 10 + 10
            roll = 2
        elif len(frame) > 1:
            strike = False
            if frame[0] == 'X':
                score += 10 + (10 - roll)
                roll = 0
                strike = True
            else:
                first_roll = int(frame[0])
                second_roll = int(frame[1]) if len(frame) > 1 else 10 - first_roll
                score += first_roll + second_roll
                roll = 2
            if not strike and roll < 2:
                for i in range(roll):
                    roll += int(game[game.index(frame) + len(frame):].split('/')[0][0])
        if roll == 0:
            break
    return score