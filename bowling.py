```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(len(game)):
        if game[i].isdigit():
            if len(game[i:]) >= 2 and game[i:i+2].isdigit() and int(game[i]) + int(game[i+1]) <= 10:
                score += int(game[i]) + int(game[i+1])
                frame += 1
            elif game[i] == 'X':
                score += 10
                frame += 1
            else:
                if i < len(game) - 1 and game[i+1].isdigit():
                    score += int(game[i])
                    frame += 1
                else:
                    score += 10
                    frame += 1
        elif game[i] == '/':
            score += 10
            frame += 1
    return score