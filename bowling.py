```
def bowling_score(games):
    score = 0
    game = [int(i) for i in re.sub('[^-0-9]', '', games).split('/')]
    game += [0] * (10 - len(game))
    
    for i in range(0, len(game), 2):
        if game[i] + game[i+1] == 10:
            score += 10
            if i < len(game) - 1:
                score += game[i+2]
        else:
            score += sum(game[i:i+2])
    
    return score