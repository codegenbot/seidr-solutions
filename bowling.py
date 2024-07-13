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
            first_roll = 10
            second_roll = 10
            for i in range(2):
                if frame[i] != 'X':
                    if i == 0:
                        first_roll = int(frame[i])
                    else:
                        second_roll = int(frame[i])
            if strike:
                score += 10 + max(first_roll, second_roll)
            else:
                score += max(first_roll, second_roll) + max(first_roll, second_roll)
        roll = 0
    return score