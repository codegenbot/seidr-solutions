def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i].isdigit() and (i + 1 < len(game) and game[i+1].isdigit()):
            if int(game[i]) + int(game[i+1]) == 10:
                score += 10
                frame -= 1
                i += 2
            else:
                score += int(game[i]) + int(game[i+1])
                i += 2
        elif game[i] == 'X':
            score += 10
            frame -= 1
            i += 1
        elif game[i].isdigit() and (i + 1 < len(game) and game[i+1] in ['/']):
            if int(game[i]) + int(game[i+1][0]) == 10:
                score += 10
                i += 2
            else:
                score += int(game[i])
                i += 2
        elif game[i].isdigit():
            score += int(game[i])
            i += 1
    return score