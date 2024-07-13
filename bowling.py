def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            first_roll = int(frames[i * 2 : i * 2].lstrip("X"))
            second_roll = int(frames[i * 2 : i * 2 + 1].rstrip("/"))
            if "X" in frames[i * 2 : i * 2 + 2]:
                score += 10 + sum(map(int, frames[: i * 2]))
            elif first_roll + second_roll == 10:
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll
        else:
            if "X" in frames[i * 2 : i * 2 + 1]:
                score += 10 + sum(map(int, frames[: i * 2]))
            else:
                score += int(frames[i * 2])
    return score