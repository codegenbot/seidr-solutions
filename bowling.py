rolls = input("Enter the string representing the individual bowls: ")
rolls += '00'  # Append two zeros to handle edge cases

score = 0
frame = 1
i = 0

while i < len(rolls):
    if rolls[i] == "/":
        score += 10 - int(rolls[i - 1]) + int(rolls[i + 1])
    elif rolls[i] == "X":
        if rolls[i + 1] != 'X':
            score += 10 + int(rolls[i + 1]) + int(rolls[i + 2])
        else:
            score += 20
        frame += 1
    else:
        if rolls[i].isdigit():
            score += int(rolls[i])

    if rolls[i] in ['X', '/']:
        frame += 1

    i += 1

print("The score of the round is:", score)