def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == "X":
            score += 30
            roll_index += 1
        elif rolls[roll_index : roll_index + 2].count("/"):
            first_roll, second_roll = map(
                int, rolls[roll_index : roll_index + 2].split("/")
            )
            score += first_roll + second_roll
            roll_index += 2
        else:
            for i in range(2):
                if rolls[roll_index] != "X":
                    score += int(rolls[roll_index])
                roll_index += 1
    return score