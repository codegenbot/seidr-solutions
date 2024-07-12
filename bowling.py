```
def bowling_score(gutter_balls):
    score = 0
    frame = 1
    for i in range(0, len(gutter_balls), 2):
        if gutter_balls[i:i+2] == 'X':
            score += 10
            if frame < 10:
                score += int(next((x for x in gutter_balls[i+2:] if x != '/'), '').replace('X', '')) * 10
            frame += 1
        elif gutter_balls[i:i+2] == '--' or gutter_balls[i:i+2] == '//':
            score += 10
            if frame < 9:
                score += int(next((x for x in gutter_balls[i+2:] if x != '/'), '').replace('/', '')) * 10
            frame += 1
        else:
            first_roll = int(gutter_balls[i:i+1])
            second_roll = int(gutter_balls[i+1:i+2].replace('/','0'))
            score += first_roll + second_roll
            if frame < 9 and gutter_balls[i+1] == '/':
                score += int(next((x for x in gutter_balls[i+2:] if x != '/'), '').replace('/', '')) * 10
            elif frame < 10:
                score += int(next((x for x in gutter_balls[i+2:] if x != 'X'), '').replace('X', '')) * 10
            frame += 1
    return score