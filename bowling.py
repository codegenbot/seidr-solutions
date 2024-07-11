```
def bowling_score(game):
    score = 0
    game = list(map(int, re.sub('[^X0-9]', '', game)))
    for i in range(0, len(game), 2):
        if game[i:i+2] == [10]*2:
            score += 20
        elif sum(game[i:i+2]) >= 10:
            score += sum(game[i:i+2])
        else:
            score += min(game[i], 10)
    return score