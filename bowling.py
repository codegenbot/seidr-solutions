def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 1]:
            first_roll = int(frames[i * 2 : i * 2].replace("/", ""))
            second_roll = int(frames[i * 2 : i * 2 + 1].replace("/", ""))
            score += min(first_roll, second_roll) + max(
                0, first_roll + second_roll - 10
            )
        else:
            score += 10
    return score