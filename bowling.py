```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            first_roll, second_roll = map(int, re.findall('\d', frames[i*2:i*2+3]))
            if first_roll == 0:
                score += 10
            elif first_roll + second_roll >= 10:
                score += first_roll + second_roll
            else:
                score += 10
        else:
            score += int(frames[i*2])
    return score