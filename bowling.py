def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if (
            len(str(rolls[roll_index:])) >= 2
            and str(rolls[roll_index]).isdigit()
            and str(rolls[roll_index + 1]).isdigit()
        ):
            first_roll = int(str(rolls[roll_index]))
            second_roll = int(str(rolls[roll_index + 1]))
            roll_index += 2
            if first_roll + second_roll == 10:
                score += first_roll + second_roll
                while (
                    len(str(rolls[roll_index:])) < 3
                    and str(rolls[roll_index]).isdigit()
                ):
                    third_roll = int(str(rolls[roll_index]))
                    score += third_roll
                    roll_index += 1
            else:
                score += first_roll + second_roll
        elif len(str(rolls[roll_index:])) >= 1 and str(rolls[roll_index]).isdigit():
            score += int(str(rolls[roll_index]))
            roll_index += 1
        else:
            if frame < 10:
                while (
                    len(str(rolls[roll_index:])) < 2
                    or not str(rolls[roll_index]).isdigit()
                    or not str(rolls[roll_index + 1]).isdigit()
                ):
                    roll_index += 1
    return score