```
def bowling_score(game):
    score = 0
    roll = 0
    frame = 1
    for char in game + 'X':
        if char.isdigit():
            num = int(char)
            if num == 10:
                score += 10
                roll += 2
                frame += 1
            else:
                score += num
                roll += 1
        elif char == '/':
            score += 10 - (10 - int(game[game.index(char) - 1]) // 2)
            roll += 2
            frame += 1
        elif char == 'X':
            if frame < 9:
                if game[game.index(char) - 1].isdigit():
                    score += int(game[game.index(char) - 1]) + 10
                    roll += 2
                else:
                    score += 10
                    roll += 2
                frame += 1
            else:
                score += 10
                roll += 1
        elif char == '-':
            if game[game.index(char) - 1].isdigit():
                score += int(game[game.index(char) - 1])
                roll += 1
    return score