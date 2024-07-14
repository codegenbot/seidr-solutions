```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            score += int(game[i]) + int(game[i+1])
            frame += 1
        elif game[i] == 'X':
            score += 10
            frame += 1
            if i < len(game) - 1:
                if game[i+1].isdigit():
                    score += int(game[i+1])
                else:
                    score += 10
        elif game[i] == '/':
            score += 10
            frame += 1
            if i < len(game) - 1:
                if game[i+1].isdigit():
                    score += int(game[i+1])
                else:
                    score += 10
    return score