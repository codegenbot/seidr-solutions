Here is the modified code:

def bowling_score(gutter_balls):
    score = 0
    frame = 1
    for i in range(0, len(gutter_balls), 2):
        if gutter_balls[i:i+2] == 'X':
            score += 10 + (10 - int(''.join(c for c in gutter_balls[:i] if c == 'X')))*10
            frame += 1
        elif gutter_balls[i:i+2] in ['--', '//']:
            score += 10
            frame += 1
        else:
            strike = False
            for j in range(i, i+3):
                if gutter_balls[j] == 'X':
                    strike = True
                    break
            if strike:
                score += 10 + int(gutter_balls[i:i+2].replace('X', ''))*10
                frame += 1
            else:
                score += int(gutter_balls[i:i+2])
                for j in range(i, len(gutter_balls)):
                    if gutter_balls[j] == '/':
                        break
                score += int(gutter_balls[i+2:j].replace('/', '')) * 10
                frame += 1
    return score