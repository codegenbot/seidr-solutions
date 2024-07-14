```
def bowling_score(game):
    score = 0
    rolls = game.split('/')
    for i in range(10):
        if len(rolls[i]) == 1:
            score += int(rolls[i])
        elif len(rolls[i]) > 1 and (i < 9 or i == 9):
            score += 10 + int(rolls[i][0])
        else:
            first_roll = int(rolls[i][0])
            second_roll = int(rolls[i][1])
            if first_roll + second_roll < 10:
                score += first_roll + second_roll
            else:
                score += 10 + second_roll
    return score