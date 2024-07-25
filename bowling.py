def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit() and (i == len(s) - 1 or not s[i + 1].isdigit()):
            first_ball = int(s[i])
            second_ball = 10 if i + 2 >= len(s) else int(s[i + 2])
            score += first_ball
            if first_ball == 10:
                score += second_ball
                frame += 1
            elif first_ball + second_ball < 11:
                score += second_ball
                frame += 1
            else:
                while frame < 10 and (score + second_ball - 10 > 10 or score >= 90):
                    if s[i + 1].isdigit():
                        second_ball = int(s[i + 2])
                    else:
                        second_ball = 0
                    score += second_ball
                    frame += 1
    return score