rolls = input("Enter the string representing the individual bowls: ")
score = 0
frame = 1

for i in range(len(rolls)):
    if rolls[i] == "/":
        if frame < 10 and i + 2 < len(rolls):
            if rolls[i + 2] == "X":
                score += 20
            else:
                score += 10 - int(rolls[i - 1])
                score += int(rolls[i + 1]) if rolls[i + 1].isdigit() else (10 - int(rolls[i - 1]))
        frame += 1
    elif rolls[i] == "X":
        if frame < 10 and i + 4 < len(rolls):
            if rolls[i + 4] == "X":
                score += 30
            else:
                score += 10
                score += int(rolls[i + 2]) if rolls[i + 2].isdigit() else 10
                score += int(rolls[i + 3]) if rolls[i + 3].isdigit() else 10
        frame += 1
    elif rolls[i].isdigit():
        score += int(rolls[i])

print("The score of the round is:", score)