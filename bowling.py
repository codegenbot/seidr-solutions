def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            first_roll, second_roll = map(int, re.split("/", frames[i]))
            if first_roll == 10:
                score += 10 + sum(map(int, frames[i + 1 : i + 3]))
            elif first_roll + second_roll == 10:
                score += first_roll + second_roll
                if i < 8 and "/" in frames[i + 1]:
                    score += sum(map(int, frames[i + 2 : i + 4]))
            else:
                score += first_roll + second_roll
        else:
            score += int(frames[i])
    return score