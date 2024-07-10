def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(1, 11):
        if rolls[roll_index] == "X":
            score += 10
            roll_index += 2
        elif re.match("\/", rolls[roll_index]):
            right_pin = int(rolls[roll_index][1])
            left_pin = 10 - right_pin
            score += left_pin + right_pin
            roll_index += 2
        else:
            right_pin = int(rolls[roll_index])
            left_pin = int(rolls[roll_index + 1])
            if right_pin + left_pin == 10:
                score += 10
                roll_index += 2
            else:
                score += right_pin + left_pin
                roll_index += 2
    return score