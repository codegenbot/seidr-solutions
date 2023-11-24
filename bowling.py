def calculate_score(bowls):
    score = 0
    rolls = []
    frame = 1
    
    for bowl in bowls:
        if bowl == "X":
            rolls.append(10)
            rolls.append(0)
            frame += 1
        elif bowl.isdigit():
            rolls.append(int(bowl))
        elif bowl == "/":
            rolls.append(10 - rolls[-1])

    for i in range(9):
        frame_score = sum(rolls[i * 2 : i * 2 + 2])

        if rolls[i * 2] == 10 and rolls[i * 2 + 2] != "/":
            next_roll = rolls[i * 2 + 2]
            next_next_roll = rolls[i * 2 + 3]
            frame_score += next_roll + next_next_roll
        elif rolls[i * 2] + rolls[i * 2 + 1] == 10 and rolls[i * 2 + 2] != "/":
            next_roll = rolls[i * 2 + 2]
            frame_score += next_roll

        score += frame_score

    return score + sum(rolls[-3:])