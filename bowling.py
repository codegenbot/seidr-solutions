```
def bowling_score(games):
    score = 0
    game = []
    for frame in games:
        if frame == 'X':
            game.append(10)
        elif frame[0] == '/':
            game.append(int(frame[1]))
        else:
            game.append(sum(map(int, frame)))
    for i in range(0, len(game), 2):
        if sum(game[i:i+2]) == 10:
            if i < len(game) - 1 and game[i+1] == 'X':
                score += 10 + game[i]
            else:
                score += sum(game[i:i+2])
        elif game[i] == 10:
            score += 10
            if i < len(game) - 1:
                score += game[i+1]
    return score