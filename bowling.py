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
            first_roll = int(frame[0])
            second_roll = int(frame[2])
            if frame[1] != 'X':
                roll = first_roll + second_roll
            score += max(first_roll, second_roll)
            if 'X' in frame:
                if strike:
                    score += 10 + roll
                else:
                    score += roll
        roll = 0
    return score