def calculate_bowling_score(input_str):
    score = 0
    frame = 1
    rolls = list(input_str.replace("-", "0"))

    i = 0
    while i < len(rolls):
        if rolls[i] == "X":
            score += 10
            score += sum(int(rolls[j]) for j in range(i + 1, i + 3) if rolls[j] not in ['X', '/'])
            if frame < 10:
                frame += 1
            i += 1
        elif rolls[i] == "/":
            score += 10 - int(rolls[i - 1]) + (10 if rolls[i + 1] == 'X' else int(rolls[i + 1]))
            if frame < 10:
                frame += 1
            i += 2
        else:
            score += int(rolls[i])
            i += 1

        if frame == 10:
            break

    return score

input_str = input()
print(calculate_bowling_score(input_str))