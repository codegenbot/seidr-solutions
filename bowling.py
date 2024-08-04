```
def bowling_score(game):
    score = 0
    roll = list(map(int, game.replace('/', '')))
    for i in range(10):
        if i < 9 and (roll[i] == 'X' or str(roll[i]) in ['10', '8/7', '8/6']):
            score += 10 + (9 - i) * 10
        elif roll[i] == 'X':
            score += 10 + sum([1, 1, 1])
        else:
            if len(str(roll[i])) > 1:
                first_roll, second_roll = map(int, str(roll[i]))
                score += first_roll + (10 - first_roll) if i < 9 and (10 - first_roll) >= 2 else first_roll
            else:
                score += roll[i]
    return score