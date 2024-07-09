```
def bowling_score(game):
    score = 0
    roll = 0
    game = game.split('/')
    for i in range(len(game)):
        if len(game[i]) == 1:
            score += int(game[i])
            roll += 1
        elif len(game[i]) == 2:
            first, second = map(int, game[i])
            score += first + second
            roll += 1
        else:
            first, second, third = map(int, game[i][:3])
            if first + second >= 10:
                next_rolls = game[i+1]
                if len(next_rolls) > 0 and len(next_rolls) <= 2:
                    third = int(next_rolls[0]) if len(next_rolls) == 1 else 10
                elif len(next_rolls) == 0:
                    third = 10
                score += first + second + third
                roll += 1
            else:
                score += first + second
                roll += 1
    return score