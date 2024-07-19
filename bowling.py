```
def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            if int(game[i]) + int(game[i+1]) == 10:
                if frame < 9:
                    score += 10
                    if frame < 8:
                        score += int(game[i-2:i])
                else:
                    score += 10
                    score += int(game[i-2:i])
            elif int(game[i]) + int(game[i+1]) > 10:
                score += 10
                score += int(game[i-2:i])
        elif game[i].isdigit():
            score += int(game[i])
        else:
            if frame < 9:
                if game[i] == 'X':
                    score += 10
                    score += int(game[:i-1])
                elif game[i] == '/':
                    score += 10 - int(game[i-1:i])
                    score += int(game[:i-2])
    return score