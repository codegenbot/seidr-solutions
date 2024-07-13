```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.replace('-', '/').split('/'):
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
                        second_roll = int(frame[1 - i])
                else:
                    strike = False
            if strike and spare:
                score += 10 + first_roll + second_roll
            elif strike:
                score += 10 + roll
            elif spare:
                score += 10 + max(first_roll, second_roll)
            else:
                score += max(first_roll, second_roll) + min(first_roll, second_roll)
        if len(frame) == 2 and int(frame[0]) != 10:
            roll = first_roll + second_roll
    return score