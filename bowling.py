def calculate_score(bowls):
    score = 0
    rolls = []
    frame = 0

    for bowl in bowls:
        if bowl == "X":
            rolls.append(10)
            frame += 1
        elif bowl.isdigit():
            rolls.append(int(bowl))
        elif bowl == "/":
            rolls.append(10 - rolls[-1])

    for i in range(10):
        if rolls[i * 2] == 10:
            frame_score = 10 + sum(rolls[i * 2 + 1 : i * 2 + 3])
        elif sum(rolls[i * 2 : i * 2 + 2]) == 10:
            frame_score = 10 + rolls[i * 2 + 2]
        else:
            frame_score = sum(rolls[i * 2 : i * 2 + 2])
        score += frame_score

    return score


bowls = input().replace(" ", "")
print(calculate_score(bowls))