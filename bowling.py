def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if len(str(rolls)) < (frame * 2 - 1):
            return score
        if rolls[roll_index] == "X":
            score += 10
            roll_index += 1
        elif (
            rolls[roll_index : roll_index + 2].isdigit()
            and int(rolls[roll_index]) + int(rolls[roll_index + 1]) == 10
        ):
            score += 10
            roll_index += 2
        else:
            first_roll = int(rolls[roll_index])
            second_roll = int(rolls[roll_index + 1])
            if first_roll != 0 and second_roll != 0:
                score += first_roll + second_roll
                roll_index += 2
            elif first_roll == 10:
                roll_index += 2
        if frame < 9:
            for i in range(2):
                if rolls[roll_index] == "/":
                    return score
                if int(rolls[roll_index]) != 0:
                    score += int(rolls[roll_index])
                roll_index += 1
    return score