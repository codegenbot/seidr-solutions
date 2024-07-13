def bowling_score(s):
    score = 0
    roll_count = 1
    for c in s:
        if c == "X":
            score += 10 + (10 - int(str(c)[1:])) * 2
            roll_count = 2
        elif c == "/":
            first_roll = 10 - int(str(c)[1:])
            second_roll = 10 - int(str(c)[:1])
            score += first_roll + second_roll
            roll_count = 2
        else:
            if roll_count == 1:
                score += 10
            else:
                if c != "X":
                    first_roll = 10 - int(c)
                    score += first_roll
            roll_count -= 1
    return score