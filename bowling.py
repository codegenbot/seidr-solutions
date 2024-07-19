def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit() and game[i+1].isdigit():
            points = int(game[i]) + int(game[i+1])
            if points == 10:
                if game[i-2:i] == 'X':
                    score += 30
                elif game[i-2:i] != '':
                    score += 10 + int(game[i-2:i])
            elif points > 10:
                if frame < 9:
                    score += 10
                    score += int(game[:i])
        elif game[i].isdigit():
            score += int(game[i])
        else:
            if game[i] == 'X':
                if frame < 9:
                    score += 10
                    if frame < 8:
                        score += int(game[:i])
                else:
                    score += 10 + int(game[:i-1])
            elif game[i] == '/':
                if frame < 9:
                    score += 10 - int(game[i-1:i])
                    score += int(game[:i-2])
    return score