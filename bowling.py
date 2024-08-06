```
def bowling_score(gutter_balls):
    score = 0
    rolls = gutter_balls.split('/')
    for i in range(0, len(rolls), 2):
        frame_score = 0
        if rolls[i] == 'X':
            frame_score += 10
            if (i + 1) < len(rolls):
                if rolls[i+1] == 'X':
                    frame_score += 10
                else:
                    frame_score += int(rolls[i+1])
        elif rolls[i].isdigit() and int(rolls[i]) < 10:
            frame_score += int(rolls[i])
            if (i + 1) < len(rolls):
                if rolls[i+1] == 'X':
                    frame_score += 10
                    continue
                else:
                    frame_score += int(rolls[i+1])
        elif rolls[i].isdigit() and int(rolls[i]) == 10:
            frame_score += 10
            i += 1
        score += frame_score
    return score