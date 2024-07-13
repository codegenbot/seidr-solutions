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
            first_roll = int(frame[0])
            second_roll = int(frame[-1])
            if first_roll != 'X':
                roll = first_roll + second_roll
            if strike:
                score += 10
            else:
                score += max(first_roll, second_roll)
        if len(frame) == 2 and frame[0] == 'X' and frame[1] == 'X':
            score += 10 + roll
            roll = 0
    return score