```
def bowling_score(game):
    score = 0
    frame = 1
    for char in game:
        if char.isdigit():
            strike = False
            spare = False
            if len(game) - game.index(char) == 2:
                next_char = game[game.index(char)+1]
                if next_char.isdigit():
                    score += int(char) + int(next_char)
                    frame += 1
                else:
                    score += int(char) + 10
                    frame += 1
            elif len(game) - game.index(char) == 3:
                next_two_chars = game[game.index(char)+1:game.index(char)+2]
                if next_two_chars.isdigit():
                    score += int(char) + int(next_two_chars)
                    frame += 1
                else:
                    score += int(char) + 10
                    frame += 1
            elif char == 'X':
                strike = True
                score += 10
                frame += 1
            elif char == '/':
                spare = True
                score += 10
                frame += 1
        if strike:
            if len(game) - game.index(char) > 2:
                next_char = game[game.index(char)+1]
                if next_char.isdigit():
                    score += int(next_char)
                else:
                    score += 10
        if spare:
            if len(game) - game.index(char) > 1:
                next_char = game[game.index(char)+1]
                if next_char.isdigit():
                    score += int(next_char)
                else:
                    score += 10
    return score