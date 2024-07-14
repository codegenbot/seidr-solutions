def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == "X":
            score += 30
            roll_index += 1
        elif "/" not in rolls[roll_index]:
            score += int(rolls[roll_index])
            roll_index += 1
        else:
            first_roll, second_roll = map(int, rolls[roll_index].split("/"))
            if first_roll + second_roll == 10:
                score += first_roll + 10
                roll_index += 1
            elif first_roll == 10:
                score += 10 + second_roll
                roll_index += 2
            else:
                score += first_roll + second_roll
                roll_index += 1
    return score