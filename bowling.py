```
def bowling_score(game):
    score = 0
    frame = 1
    for roll in game + '/':
        if roll == 'X':
            score += 30
            frame += 1
        elif roll == '/':
            score += 10 - int(game[:game.index('/')].count('X'))
            game = game[game.index('/') + 1:]
            frame += 1
        elif roll == '-':
            first_roll = int(game[:game.index('-')].count('X'))
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            game = game[game.index('-')+1:]
            frame += 1
        else:
            if int(roll) + int(game[0]) >= 10:
                first_roll = 10 - int(game[0])
                second_roll = int(roll)
                score += first_roll + second_roll
                game = game[1:]
                frame += 1
            else:
                score += int(roll) + int(game[0])
                if int(roll) + int(game[0]) == 10:
                    game = game[2:]
                else:
                    game = game[1:]
                frame += 1
    return score