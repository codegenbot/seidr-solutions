```
def bowling_score(games):
    score = 0
    frame_num = 1
    for game in games:
        if game == 'X':
            score += 30
            frame_num -= 1
        elif game == '/':
            score += 10
            frame_num -= 1
        else:
            if len(game) > 1:
                score += int(game[0]) + int(game[-1])
            else:
                score += int(game)
    return score