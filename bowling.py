```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            balls_in_frame = int(s[i])
        else:
            balls_in_frame = 10
        if s[i+1] == 'X':
            score += 10 + (10 - (frame-1))
            frame += 1
        elif s[i+1].isdigit():
            score += int(s[i+1]) + (10 - balls_in_frame)
            frame += 1
        else:
            score += sum(map(int, [s[i], s[i+1]])) + (10 - balls_in_frame)
            frame += 1
    return score