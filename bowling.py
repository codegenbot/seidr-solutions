rolls = input("Enter the string representing the individual bowls: ")
score = 0
frame = 1
i = 0

while i < len(rolls) and frame <= 10:
    if rolls[i] == "/":
        score += 10 - int(rolls[i - 1]) + (int(rolls[i + 1]) if rolls[i + 1].isdigit() else 0)
    elif rolls[i] == "X":
        score += 10 + (int(rolls[i + 1]) if rolls[i + 1].isdigit() else 0) + (int(rolls[i + 2]) if rolls[i + 2].isdigit() else 0)
        frame += 1
    else:
        if rolls[i].isdigit():
            score += int(rolls[i])

    i += 1

print("The score of the round is:", score)