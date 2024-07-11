def bowling_score(rolls):
    score = 0
    frame = 1
    roll = 0
    while frame <= 10:
        if rolls[roll] == "X":
            score += 10 + (
                10
                if rolls[roll + 2] == "X"
                else int(rolls[roll + 1]) + int(rolls[roll + 2])
            )
            roll += 1
        elif rolls[roll + 1] == "/":
            score += 10 + (10 if rolls[roll + 2] == "X" else int(rolls[roll + 2]))
            roll += 2
        else:
            score += int(rolls[roll]) + int(rolls[roll + 1])
            roll += 2
        frame += 1
    return score


rolls = input()
print(bowling_score(rolls))