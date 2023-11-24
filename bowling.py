def calculate_score(bowls):
    score = 0
    rolls = [0] * 21
    roll_index = 0

    for bowl in bowls:
        if bowl == "X":
            rolls[roll_index] = 10
            roll_index += 1
        elif bowl.isdigit():
            rolls[roll_index] = int(bowl)
            roll_index += 1
        elif bowl == "/":
            rolls[roll_index] = 10 - rolls[roll_index - 1]
            roll_index += 1

    frame = 0
    for i in range(10):
        if rolls[frame] == 10:
            score += 10 + rolls[frame + 1] + rolls[frame + 2]
            frame += 1
        elif rolls[frame] + rolls[frame + 1] == 10:
            score += 10 + rolls[frame + 2]
            frame += 2
        else:
            score += rolls[frame] + rolls[frame + 1]
            frame += 2

    return score