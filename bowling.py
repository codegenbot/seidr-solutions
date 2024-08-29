```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i].isdigit():
            strike = False
            for j in range(i+1, min(i+2, 11)):
                if frames[j] != 'X':
                    if j == i+1:
                        first_roll = int(frames[i])
                    else:
                        second_roll = int(frames[j])
                    score += max(first_roll, second_roll)
                    break
            if not strike:
                score += int(frames[i]) + int(frames[i+1])
        else:
            score += 10
    return score