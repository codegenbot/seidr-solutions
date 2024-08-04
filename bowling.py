def bowling_score(rolls):
    score = 0
    roll_index = 0

    for frame in range(1, 11):
        if rolls[roll_index] != "-":
            if "/" in rolls[roll_index]:
                strikes, spares = map(int, rolls[roll_index].split("/"))
                score += [10, 10 + 10 - 1][strikes == 2]
            else:
                for i in range(1, 3):
                    if i < 2 or rolls[roll_index] != "X" * i:
                        score += min(int(rolls[roll_index][:i]), 10)
                        roll_index += 1
        else:
            if frame < 10:
                score += 10 + bowling_score(rolls[roll_index + 1 :])
                break
    return score