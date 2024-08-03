def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i] == "X":
            score += 30
        elif frames[i].isdigit():
            strike = False
            if i < 9 and frames[i + 1] == "/":
                strike = True
            if strike:
                score += int(frames[i]) + 10
            else:
                score += int(frames[i])
        elif "/" in frames[i]:
            first_roll, second_roll = map(int, frames[i].split("/"))
            score += first_roll + second_roll
    return score