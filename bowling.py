def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] != "/":
            score += int(rolls[roll_index])
            roll_index += 1
        else:
            first, second = map(int, rolls[roll_index - 1 : roll_index + 1].split("/"))
            score += first + second
            roll_index += 2
    return score