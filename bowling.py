def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            first_roll = int(frames[i * 2 : i * 2].strip())
            second_roll = int(frames[i * 2 + 1 : i * 2 + 2].strip().split("/")[0])
            score += min(first_roll, second_roll) + (
                10 - i if first_roll + second_roll == 10 else 0
            )
        else:
            score += int(frames[i * 2 : i * 2].strip())
    return score