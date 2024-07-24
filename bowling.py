def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == "X":
            score += (
                10 + (10 - int(rolls[roll_index + 1].split("/")[0]))
                if roll_index < 8
                else 10
            )
            roll_index += 2
        elif "/" not in rolls[roll_index]:
            score += min(int(rolls[roll_index]), 10) * 2
            roll_index += 1
        else:
            first_roll, second_roll = map(int, rolls[roll_index].split("/"))
            if first_roll + second_roll == 10:
                score += first_roll + 10
                roll_index += 1
            else:
                score += first_roll + second_roll
                roll_index += 1
    return score