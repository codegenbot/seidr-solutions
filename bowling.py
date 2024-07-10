def bowling_score(roll):
    score = 0
    roll_index = 0
    for frame in range(10):
        if roll[roll_index] == "X":
            score += 30
            roll_index += 1
        elif re.match("^-", roll[roll_index]):
            score += 10 - int(roll[roll_index][1])
            roll_index += 1
        else:
            strike = False
            if roll[roll_index] == "/":
                strike = True
                roll_index += 1
            first_roll = int(roll[roll_index])
            roll_index += 1
            second_roll = int(roll[roll_index]) if not strike else 10 - first_roll
            roll_index += 1
            score += first_roll + second_roll
    return score