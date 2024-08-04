```
def bowling_score(gutter_balls):
    frames = [list(frame) for frame in gutter_balls.split('/')]
    score = 0
    roll = 1
    while roll <= 10:
        if len(frames[roll - 1]) == 2 and frames[roll - 1][0] != 'X':
            score += 10
        elif len(frames[roll - 1]) >= 1 and frames[roll - 1][0] != 'X':
            score += int(frames[roll - 1][0])
            if len(frames[roll - 1]) > 1:
                score += int(frames[roll - 1][1])
        else:
            roll_score = sum(map(int, frames[roll - 1]))
            score += roll_score
        roll += 1
    return score