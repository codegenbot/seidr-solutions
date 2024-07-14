Here is the Python solution for the bowling problem:

```
def bowling_score(game):
    score = 0
    frame = 1
    while frame <= 10:
        if game[2*frame-2:2*frame] == 'X':
            score += 10 + (10 - int(game[2*frame-1])) if frame < 10 else 25
            frame += 1
        elif game[2*frame-1].isdigit():
            first_roll = int(game[2*frame-1])
            second_roll = int(game[2*frame])
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
            frame += 1
        else:
            strike_frame_score = 0
            while game[2*frame-1] != '/':
                strike_frame_score += int(game[2*frame-1])
                frame += 1
            if frame > 10:
                break
            score += 10 + strike_frame_score
    return score