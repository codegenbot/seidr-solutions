```
def bowling_score(games):
    score = 0
    game = 0
    for frame in games:
        if '/' in frame:
            first, second = map(int, frame.split('/'))
            score += first + second
            game += 1
        elif 'X' in frame:
            score += 10
            game += 1
        else:
            rolls = [int(x) for x in frame]
            if len(rolls) == 3 and sum(rolls) == 10:
                score += 10
                game += 1
            else:
                score += sum(rolls)
                game += 1
    return score