```
def bowling_score(game):
    score = 0
    frame = 1
    i = 0
    while i < len(game):
        if game[i].isdigit() and game[i+1].isdigit():
            if int(game[i]) + int(game[i+1]) == 10:
                score += 10
                i += 1
            else:
                score += int(game[i]) + int(game[i+1])
                i += 2
        elif game[i] == 'X':
            score += 10
            if i < len(game) - 1 and game[i+1].isdigit() and game[i+2].isdigit():
                score += int(game[i+1]) + int(game[i+2])
            i += 1
        elif game[i] == '/':
            score += 5
            if i < len(game) - 1 and game[i+1].isdigit() and game[i+2].isdigit():
                score += int(game[i+1]) + int(game[i+2])
            i += 2
        else:
            if game[i] == 'X' or game[i:i+2] == 'XX':
                score += 10
                if i < len(game) - 1 and game[i+1].isdigit() and game[i+2].isdigit():
                    score += int(game[i+1]) + int(game[i+2])
                i += 2
            elif game[i:i+2] == 'X/':
                score += 8
                if i < len(game) - 1 and game[i+1].isdigit() and game[i+2].isdigit():
                    score += int(game[i+1]) + int(game[i+2])
                i += 3
            elif game[i:i+2] == 'X-':
                score += 9
                if i < len(game) - 1 and game[i+1].isdigit() and game[i+2].isdigit():
                    score += int(game[i+1]) + int(game[i+2])
                i += 3
            else:
                score += int(game[i])
                i += 1
    return score