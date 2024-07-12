def calculate_bowling_score(input_str):
    score = 0
    frame = 1
    rolls = list(input_str.replace("-", "0"))

    for i in range(len(rolls)):
        if rolls[i] == "X":
            score += 10
            score += sum(int(rolls[j]) for j in range(i + 1, i + 3) if rolls[j] != "/")
            if frame < 10:
                frame += 1
        elif rolls[i] == "/":
            next_roll = 0 if rolls[i + 1] == "-" else int(rolls[i + 1])
            score += 10 - int(rolls[i - 1]) + next_roll
            if frame < 10:
                frame += 1
        else:
            score += int(rolls[i])

    return score

input_str = input()
print(calculate_bowling_score(input_str))