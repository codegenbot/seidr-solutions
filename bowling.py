rolls = input("Enter the string representing the individual bowls: ")
score = 0
frame = 1

for i in range(len(rolls)):
    if rolls[i] == "/":
        if frame < 10 and i + 2 < len(rolls):
            if rolls[i + 1].isdigit():
                score += 10 - int(rolls[i - 1]) + int(rolls[i + 1])
            else:
                score += 10 - int(rolls[i - 1]) + (10 if rolls[i + 1] == 'X' else 0)
        frame += 1
    elif rolls[i] == 'X':
        if frame < 10:
            if rolls[i + 2].isdigit():
                score += 10 + int(rolls[i + 1]) + int(rolls[i + 2])
            else:
                score += 20
        else:
            score += 10

    elif rolls[i].isdigit():
        score += int(rolls[i])

print("The score of the round is:", score)