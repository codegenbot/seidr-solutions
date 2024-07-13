```
def bowling_score(games):
    score = 0
    game = 0
    for frame in games:
        if '/' in frame:
            left, right = map(int, frame.split('/'))
            score += left + right
        else:
            score += int(frame)
        if score >= 10 and game < 9:
            score -= 10
        game += 1
    return score