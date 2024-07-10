rolls = input("Enter the string representing the individual bowls: ")
score = 0
frame = 1

for i in range(len(rolls)):
    if rolls[i] == "/":
        score += 10 - int(rolls[i - 1])
        if frame < 10 and i + 2 < len(rolls) and rolls[i + 2] != "X":
            score += int(rolls[i + 1]) if rolls[i + 1].isdigit() else (10 - int(rolls[i - 1]))
        frame += 1
    elif rolls[i] == "X":
        score += 10
        if frame < 10 and i + 2 < len(rolls):
            if rolls[i + 2] == "/":
                score += 10 - int(rolls[i + 1])
            else:
                score += int(rolls[i + 1]) + int(rolls[i + 2]) if rolls[i + 1].isdigit() and rolls[i + 2].isdigit() else 10
        frame += 1

print("The score of the round is:", score)