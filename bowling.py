```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i].isdigit():
            pins = int(game[i])
            i += 1
            if i < len(game) and game[i].isdigit():
                pins += int(game[i])
                i += 1
            if pins == 10:
                score += 10
            elif frame < 9 or (frame == 9 and (pins == 8 or pins == 9)):
                score += pins
                frame += 1
            else:
                if game[i-1] == 'X':
                    score += 10 + int(game[:i-1])
                elif game[i-1].isdigit():
                    score += 10 - pins + int(game[:i-1])
                i -= 1
        else:
            if game[i] == 'X':
                score += 10
                frame += 1
            elif game[i] == '/':
                score += 10 - 1 + int(game[:i-2])
                frame += 1
            i += 1
    return score