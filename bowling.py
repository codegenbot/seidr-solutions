def calculate_score(bowls):
    score = 0
    rolls = []
    roll_index = 0

    for bowl in bowls:
        if bowl == "X":
            rolls.append(10)
            roll_index += 1
        elif bowl.isdigit():
            rolls.append(int(bowl))
            roll_index += 1
        elif bowl == "-":
            rolls.append(0)
            roll_index += 1

    frame = 0
    for i in range(0, len(rolls), 2):
        if rolls[frame] == 10 and rolls[frame + 1] != 0:
            score += 10 + rolls[frame + 1] + rolls[frame + 2] if rolls[frame + 1] != "-" and rolls[frame + 2] != "-" else 0
            frame += 1
        elif rolls[frame] + rolls[frame + 1] == 10 and rolls[frame + 1] != 0:
            score += 10 + rolls[frame + 2] if rolls[frame + 2] != "-" else 0
            frame += 2
        else:
            score += rolls[frame] + rolls[frame + 1]
            frame += 2

    return score