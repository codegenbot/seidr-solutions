def bowling_score(bowls):
    rolls = [0] * 22
    score = 0
    frame = 1

    for bowl in bowls:
        if frame > 21:
            break

        if bowl == "X":
            rolls[frame] = 10
            frame += 2
        elif bowl == "/":
            rolls[frame] = 10 - rolls[frame - 1]
            frame += 1
        else:
            rolls[frame] = int(bowl)
            frame += 1

    for i in range(1, 19, 2):
        if rolls[i] == 10:
            if i < 17 and rolls[i + 2] is not None and rolls[i + 3] is not None:
                score += 10 + rolls[i + 2] + rolls[i + 3]
            else:
                score += 10
        elif rolls[i] + rolls[i + 1] == 10:
            if i < 18 and rolls[i + 2] is not None:
                score += 10 + rolls[i + 2]
            else:
                score += 10
        else:
            score += rolls[i] + rolls[i + 1]

    return score