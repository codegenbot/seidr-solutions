```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if "-" in frames[i * 2:i * 2 + 2]:
            if frames[i * 2:i * 2 + 1] == "X":
                score += 10
            else:
                first_roll, second_roll = map(int, frames[i * 2:i * 2].replace("/", "").split("-"))
                score += first_roll + second_roll
        elif "/" in frames[i * 2:i * 2 + 2]:
            first_roll, second_roll = map(int, frames[i * 2:i * 2].replace("/").split("-"))
            score += min(first_roll, second_roll) + max(0, first_roll + second_roll - 10)
        else:
            score += int(frames[i * 2:i * 2]) + int(frames[i * 2 + 1:i * 2 + 2])
    return score