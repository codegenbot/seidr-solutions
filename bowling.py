def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            first_roll = int(frames[i * 2].strip("/"))
            second_roll = int(frames[i * 2 + 1].strip("/"))
            if first_roll == 10:
                score += 10 + sum(int(x) for x in frames[2 * i + 2 :])
            elif first_roll + second_roll == 10:
                score += first_roll + second_roll
                score += sum(int(x) for x in frames[4 * i + 2 :])
            else:
                score += first_roll + second_roll
        else:
            if int(frames[i * 2]) == 10:
                score += 10
                score += sum(int(x) for x in frames[2 * i + 2 :])
            else:
                score += int(frames[i * 2])
    return score