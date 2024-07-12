def bowling_score(bowls):
    score = 0
    frame = 1
    rolls = [0] * 22
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
        if rolls[i] == 10 and i < 19:
            score += 10 + rolls[i + 2] + rolls[i + 3]
        elif i < 18 and rolls[i] + rolls[i + 1] == 10:
            score += 10 + rolls[i + 2]
        else:
            score += rolls[i] + rolls[i + 1]

    return score