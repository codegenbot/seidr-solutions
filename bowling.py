Here is the Python solution for the bowling problem:

```
def bowling_score(gutter_balls):
    score = 0
    frame = 1
    while frame <= 10:
        if gutter_balls[frame-1] == 'X':
            if frame < 10:
                score += 30
            else:
                score += 10 + 10 + int(gutter_balls[frame-2])
            frame += 1
        elif '/' in gutter_balls[frame-1]:
            left, right = map(int, gutter_balls[frame-1].split('/'))
            if left == 10:
                score += left + right
                frame += 1
            else:
                score += left
                frame += 1
        else:
            score += int(gutter_balls[frame-1])
            frame += 1
    return score