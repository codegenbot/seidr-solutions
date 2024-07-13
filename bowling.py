def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if len(str(rolls[roll_index:])) >= 3:
            if str(rolls[roll_index:]).startswith("X"):
                score += 30
                roll_index += 1
            else:
                ones, twos = map(int, str(rolls[roll_index : roll_index + 2]))
                score += ones + twos
                roll_index += 2
        elif len(str(rolls[roll_index:])) >= 2:
            ones, _ = map(int, str(rolls[roll_index : roll_index + 2]).replace("/", ""))
            if ones == 10:
                score += 10
                roll_index += 1
            else:
                score += ones + 10 - int(str(rolls[roll_index : roll_index + 1]))
                roll_index += 2
        else:
            ones = int(str(rolls[roll_index : roll_index + 1]).replace("/", ""))
            score += ones
            roll_index += 1
    return score