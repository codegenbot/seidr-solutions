def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i : i + 2].count("/"):
            strike = int(frames[i])
            over_strike = int(frames[i + 1][1])
            score += strike + over_strike
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i + 1])
            if second_roll != "X":
                score += first_roll + second_roll
            else:
                score += 10 + strike
    return score