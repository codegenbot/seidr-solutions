def bowling_score(game):
    score = 0
    frame = 1
    for i in range(0, len(game), 2):
        if game[i].isdigit():
            if game[i+1].isdigit():
                score += int(game[i]) + int(game[i+1])
            else:
                score += int(game[i]) * 10
            if frame < 10 and (game[i] == 'X' or game[i+1] == '/'):
                if i < len(game) - 2 and game[i+2].isdigit():
                    score += int(game[i+2])
                elif i < len(game) - 3 and game[i+2].isdigit() and game[i+3].isdigit():
                    score += int(game[i+2]) + int(game[i+3])
            frame += (game[i] == 'X') or (game[i+1] == '/')
    return score