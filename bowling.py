rolls = input("Enter the string representing the individual bowls: ")
score = 0
frame = 1

for i in range(len(rolls)):
    if rolls[i] == "/":
        if frame < 10 and i + 2 < len(rolls):
            score += 10 - int(rolls[i - 1])
            score += int(rolls[i + 1]) if rolls[i + 1].isdigit() else (10 - int(rolls[i - 1]))
        elif frame == 10:
            score += 10 - int(rolls[i - 1])
            score += int(rolls[i + 1]) if rolls[i + 1] in ["X", "/"] else 0

        frame += 1

print("The score of the round is:", score)