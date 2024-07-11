def bowling_score(bowls):
    score = 0
    frame = 1
    rolls = []
    for bowl in bowls:
        if bowl == "X":
            rolls.extend([10, 0])
        elif bowl == "/":
            rolls.append(10 - rolls.pop())
        elif bowl == "-":
            rolls.append(0)
        else:
            rolls.append(int(bowl))

        while frame < 10 and (len(rolls) >= 2 and rolls[0] == 10 or len(rolls) >= 3):
            if rolls[0] == 10:  # Strike
                score += 10 + sum(rolls[:2])
                rolls = rolls[1:]
            elif sum(rolls[:2]) == 10:  # Spare
                score += 10 + rolls[2]
            else:
                score += sum(rolls[:2])
            rolls = rolls[2:]
            frame += 1

    score += sum(rolls)
    return score


bowls = input()
print(bowling_score(bowls))