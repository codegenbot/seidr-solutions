```
def bowling_score(game):
    score = 0
    roll = 0
    for frame in game.split('/'):
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            if frame[0] == 'X':
                score += 10
                if len(game.replace('/', '')) > 2:
                    roll = int(game.replace('/', '').split('X')[1][0])
                    score += roll
            else:
                score += sum(map(int, frame))
        else:
            if frame[0] == 'X':
                score += 10
                if len(game.replace('/', '')) > 3:
                    roll = int(game.replace('/', '').split('X')[1][:2])
                    score += sum(map(int, list(roll)))
            else:
                first_roll = int(frame[0])
                second_roll = int(frame[1])
                if first_roll + second_roll == 10:
                    score += first_roll + second_roll
                else:
                    score += max(first_roll, second_roll)
                    roll = min(first_roll, second_roll)
    return score