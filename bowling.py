def calculate_score(bowls):
    score = 0
    rolls = []
    frame = 0

    for bowl in bowls:
        if bowl == "X":
            rolls.append(10)
            rolls.append(0)
            frame += 1
        elif bowl.isdigit():
            rolls.append(int(bowl))
        elif bowl == "/":
            rolls.append(10 - rolls[-1])
            rolls.append(0)
            frame += 1

    if rolls[-3] == 10:
        frame_score = sum(rolls[-3:])
    elif sum(rolls[-2:]) == 10:
        frame_score = sum(rolls[-3:])
    else:
        frame_score = sum(rolls[-2:])
    score += frame_score

    for i in range(8, -1, -1):
        if rolls[i * 2] == 10:
            frame_score = 10 + rolls[i * 2 + 2] + rolls[i * 2 + 3]
        elif sum(rolls[i * 2 : i * 2 + 2]) == 10:
            frame_score = 10 + rolls[i * 2 + 2]
        else:
            frame_score = sum(rolls[i * 2 : i * 2 + 2])
        score += frame_score

    return score

bowls = input().replace(" ", "")
print(calculate_score(bowls))