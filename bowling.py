```
def bowling_score(game):
    score = 0
    for i in range(10):
        if game[i].isdigit():
            if game[i] == 'X':
                score += 30
            elif game[i+1].isdigit() and int(game[i]) + int(game[i+1]) <= 10:
                score += int(game[i]) + int(game[i+1])
            else:
                score += int(game[i]) * 2
        elif game[i] == '-':
            continue
    return score