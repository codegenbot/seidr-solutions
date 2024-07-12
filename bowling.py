def calculate_bowling_score(input_str):
    score = 0
    frame = 1
    rolls = list(input_str.replace("-", "0"))

    i = 0
    while i < len(rolls):
        if rolls[i] == "X":
            score += 10
            if i + 1 < len(rolls) and rolls[i + 1] == 'X':
                score += 10
            elif i + 2 < len(rolls) and rolls[i + 2] == 'X':
                score += 10
            else:
                score += int(rolls[i + 1])
            if frame < 10:
                frame += 1
            i += 1
        elif rolls[i] == "/":
            score += 10 - int(rolls[i - 1]) + int(rolls[i + 1])
            if frame < 10:
                frame += 1
            i += 2
        else:
            score += int(rolls[i])
            i += 1

    return score

input_str = input()
print(calculate_bowling_score(input_str))