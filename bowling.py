```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            if game[i+1].isdigit():
                score += int(game[i]) + int(game[i+1])
                frame += 1
            elif game[i] == 'X':
                score += 10
                if i < len(game) - 1 and game[i+1].isdigit():
                    score += int(game[i+1])
                frame += 1
            elif game[i] == '/':
                score += 10
                if i < len(game) - 2 and game[i+1]+game[i+2].isdigit():
                    score += int(game[i+1]+game[i+2])
                frame += 1
        else:
            if game[i] == 'X':
                score += 10
                if i < len(game) - 1 and game[i+1].isdigit():
                    score += int(game[i+1])
                frame += 1
            elif game[i] == '/':
                score += 10
                if i < len(game) - 2 and game[i+1]+game[i+2].isdigit():
                    score += int(game[i+1]+game[i+2])
                frame += 1
    return score