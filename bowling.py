```python
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
            spare = False
            first_roll = 0
            second_roll = 0
            for i in range(2):
                if frame[i] != 'X':
                    if i == 0:
                        first_roll = int(frame[i])
                    else:
                        second_roll = int(frame[i])
                else:
                    strike = False
            if strike:
                score += 10 + roll
            elif first_roll + second_roll < 10:
                score += 10 + roll
            else:
                score += first_roll + second_roll + roll
        roll = 0
    return score