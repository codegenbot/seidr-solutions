def bowling_score(rolls):
    score = 0
    roll_index = 0

    for frame in range(1, 11):
        if len(str(rolls)) < roll_index + 1:
            return score

        if rolls[roll_index] == "X":
            score += 30
            roll_index += 1
        elif (
            rolls[roll_index : roll_index + 2].isdigit()
            and int(rolls[roll_index : roll_index + 2]) <= 10
        ):
            first_roll = int(rolls[roll_index : roll_index + 1])
            if len(str(rolls)) > roll_index + 1 and rolls[roll_index + 1] == "/":
                score += first_roll * 2
                roll_index += 2
            else:
                score += first_roll + int(rolls[roll_index + 1])
                roll_index += 2
        elif (
            rolls[roll_index : roll_index + 3].isdigit()
            and int(rolls[roll_index : roll_index + 3]) <= 10
        ):
            first_roll = int(rolls[roll_index : roll_index + 1])
            second_roll = int(rolls[roll_index + 1 : roll_index + 2])
            if len(str(rolls)) > roll_index + 2 and rolls[roll_index + 2] == "/":
                score += first_roll + second_roll * 2
                roll_index += 3
            else:
                score += first_roll + second_roll
                roll_index += 3

    return score