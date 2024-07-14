def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == "X":
            score += 10 + (10 if frame < 9 else 0)
            frame += 1
        elif s[i] == "/":
            first_roll = int(s[i - 1]) * 10 + 10 - int(s[i + 1])
            score += first_roll + (10 if frame < 9 else 0)
            frame += 1
        else:
            first_roll = int(s[i - 1]) * 10 + int(s[i])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += second_roll == 10
    return score