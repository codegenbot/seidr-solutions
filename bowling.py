def bowling_score(rolls):
    score = 0
    frame = 1
    roll_index = 0
    while frame <= 10:
        if rolls[roll_index] == "X":
            score += 10 + sum(map(int, rolls[roll_index + 1 : roll_index + 3]))
            roll_index += 1
        elif rolls[roll_index + 1] == "/":
            score += 10 + int(rolls[roll_index + 2])
            roll_index += 2
        else:
            score += int(rolls[roll_index]) + int(rolls[roll_index + 1])
            roll_index += 2
        frame += 1
    return score


rolls = input()
print(bowling_score(rolls))