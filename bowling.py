```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for char in game:
        if char == 'X':
            score += 30
            roll += 2
        elif char == '/':
            score += int(game[game.index(char) - 1]) * 10 + int(char[1])
            roll += 2
            frame += 1
        else:
            score += int(char)
            roll += 1
    return score