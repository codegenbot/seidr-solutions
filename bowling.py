rolls = input("Enter the string representing the individual bowls: ")
rolls += '00'  

score = 0
frame = 1
i = 0

while i < len(rolls):
    if rolls[i] == "/":
        score += 10 - int(rolls[i - 1]) + int(rolls[i + 1])
    elif rolls[i] == "X":
        score += 10 + int(rolls[i + 1]) + (int(rolls[i + 2]) if rolls[i + 1] != 'X' else (int(rolls[i + 3]) if rolls[i + 2] != 'X' else int(rolls[i + 4])))
        frame += 1
    else:
        if rolls[i].isdigit():
            score += int(rolls[i])

    if rolls[i] == 'X' or rolls[i] == '/':
        frame += 1

    if frame == 11:
        break

    i += 1

print("The score of the round is:", score)