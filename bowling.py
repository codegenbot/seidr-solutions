def calculate_bowling_score(bowls):
    score = 0
    index = 0
    for _ in range(10):
        if bowls[index] == "X":
            score += 10
            if bowls[index + 1] == "X":
                score += 10
            else:
                score += int(bowls[index + 1])
                if bowls[index + 2] == "/":
                    score += 10 - int(bowls[index + 1])
                else:
                    score += int(bowls[index + 2])
            index += 1
        elif bowls[index + 1] == "/":
            score += 10
            if bowls[index + 2] != "-":
                score += int(bowls[index + 2])
            index += 2
        elif bowls[index] != "-":
            score += int(bowls[index]) + int(bowls[index + 1])
            index += 2

    return score