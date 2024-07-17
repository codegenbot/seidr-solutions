def bowling_score(game):
    score = 0
    frame = 0
    previous_rolls = [0]

    for i in range(1, len(game) + 1):
        if game[i - 1] != "/":
            roll = int(game[i - 1])
        else:
            roll = 10

        if roll == 10:
            score += roll
            frame += 1
            previous_rolls.append(0)

        elif roll + int(game[i - 2]) > 10:
            previous_rolls[0] = 10 - roll
            score += roll
            frame += 1

        else:
            score += roll
            previous_rolls[0] = roll

        if len(previous_rolls) >= 2 and sum(previous_rolls) == 10:
            while previous_rolls[-1] != 0:
                score += int(game[i - 1])
                previous_rolls.pop()
                frame += 1

    return score