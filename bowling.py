```
def bowling_score(gutter_balls):
    score = 0
    frame = 1
    i = 0
    while i < len(gutter_balls):
        if gutter_balls[i:i+2] == 'X ' * 2:
            score += 10 + (10 - int(gutter_balls[:i].count('X') * 2)) * 10
            i += 2
            frame += 1
        elif gutter_balls[i:i+2] in ['--', '//']:
            score += 10
            i += 2
            frame += 1
        else:
            strike = False
            for j in range(i, i+3):
                if gutter_balls[j] == 'X':
                    strike = True
                    break
            if strike:
                score += 10 + int(gutter_balls[i:i+2].replace('X', '')) * 10
                i += 3
                frame += 1
            else:
                score += int(gutter_balls[i:i+2])
                for j in range(i, len(gutter_balls)):
                    if gutter_balls[j] == '/':
                        break
                score += int(gutter_balls[i+2:j].replace('/', '')) * 10
                i = j
                frame += 1
    return score