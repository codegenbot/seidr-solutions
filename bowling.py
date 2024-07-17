```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for char in game:
        if char == 'X':
            score += 30
            roll = 2
        elif char == '/':
            score += min(10, int(game[:game.index('/')].count('X')) * 10) + max(0, 10 - int(game[:game.index('/')].count('X')))
            game = game[game.index('/')+1:]
            frame -= 1
            roll = 0
        else:
            if roll == 2:
                score += min(10, int(char))
                roll = 1
            elif roll == 1:
                score += min(10, int(char))
                roll = 0
                frame -= 1
    return score