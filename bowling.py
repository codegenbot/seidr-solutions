```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += sum(map(int, frame))
        else:
            strike = True
            for i in range(2):
                if frame[i] != 'X':
                    first_roll = int(frame[i])
                    second_roll = int(frame[1 - i])
                    if i == 0:
                        roll = first_roll + second_roll
                    score += max(first_roll, second_roll)
                    strike = False
            if strike:
                score += 10 + roll
        roll = 0
    return score