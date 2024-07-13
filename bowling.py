```python
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += 10 + int(frame)
        elif len(frame) == 2:
            first_roll, second_roll = map(int, frame)
            if first_roll == 10: 
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
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