```
def bowling_score(game):
    score = 0
    frame = 1
    for roll in game + '/':
        if roll == 'X':
            score += 30
            frame += 1
        elif roll == '/':
            score += 10
            frame += 1
        else:
            strike = False
            if roll == '5':
                roll = int(roll)
            while True:
                if len(game) < frame * 2 + 1:
                    break
                next_roll = game[frame * 2]
                if next_roll == 'X':
                    score += 10 + int(roll) + 30
                    strike = True
                    break
                elif next_roll == '/':
                    score += 10 + roll
                    frame += 1
                    break
                else:
                    score += roll
                    roll = str(int(roll) + int(next_roll))
                    game = game[:frame * 2] + '/' + game[frame * 2 + 1:]
                    frame += 1
    return score