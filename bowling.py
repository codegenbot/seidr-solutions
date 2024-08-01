Here is the solution:

def bowling_score(games):
    score = 0
    game = 0
    for frame in games:
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = 10 - first_roll
            if game < 9 and sum([int(x) for x in str(first_roll)]) == 10:
                score += 20
            else:
                score += first_roll + second_roll
        elif frame == 'X':
            score += 30
        else:
            score += int(frame)
        game += 1
    return score