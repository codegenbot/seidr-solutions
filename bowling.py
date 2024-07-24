def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == "/":
            non_strike_roll = int(rolls[roll_index + 1])
            strike_roll = int(rolls[roll_index - 1])
            score += strike_roll + non_strike_roll
            roll_index += 2
        elif rolls[roll_index] == "X":
            score += 10
            roll_index += 1
        else:
            first_roll = int(rolls[roll_index])
            if first_roll < 5:
                score += first_roll
                roll_index += 1
            else:
                second_roll = int(rolls[roll_index + 1])
                score += first_roll + second_roll
                roll_index += 2
    return score