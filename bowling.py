bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0
frame = 9

while frame >= 0:
    frame_score = 0
    index = (9 - frame) * 2

    for i in range(index, len(bowls)):
        if bowls[i] == "X":
            frame_score += 10
        elif bowls[i] == "/":
            frame_score += 10 - int(bowls[i - 1])
        elif bowls[i] == "-":
            frame_score += 0
        else:
            frame_score += int(bowls[i])

    score += frame_score
    frame -= 1

print(score)