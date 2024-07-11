def bowling_score(bowls):
    score = 0
    frame = 1
    rolls = []
    for bowl in bowls:
        if bowl == "X":
            rolls.extend([10, 0])
        elif bowl == "/":
            rolls.append(10 - rolls[-1])
        elif bowl == "-":
            rolls.append(0)
        else:
            rolls.append(int(bowl))

    for i in range(10):
        if rolls[frame - 1] == 10:
            score += 10 + rolls[frame] + rolls[frame + 1]
            frame += 1
        elif rolls[frame - 1] + rolls[frame] == 10:
            score += 10 + rolls[frame + 1]
            frame += 2
        else:
            score += rolls[frame - 1] + rolls[frame]
            frame += 2

    return score


# Read input from user
bowls = input()
print(bowling_score(bowls))