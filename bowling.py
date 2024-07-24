```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            first_roll = int(s[i])
            second_roll = int(s[i+1]) if s[i+1].isdigit() else 10
            if second_roll == 10:
                score += second_roll
                frame += 1
            elif first_roll + second_roll == 10:
                score += first_roll + second_roll
                frame += 1
            else:
                score += first_roll
                if second_roll != 0:
                    score += second_roll
                frame += (first_roll == 10)
    return score