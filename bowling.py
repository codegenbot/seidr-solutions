bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0
frame = 9

while frame >= 0:
    frame_score = 0
    for index in range(0, len(bowls) - 2, 2):
        if bowls[index] == "X":
            frame_score += 10
        elif bowls[index + 1] == "/":
            frame_score += 10
        elif bowls[index] == "-":
            frame_score += 0
        else:
            frame_score += int(bowls[index])

    if bowls[-2] == "X" or bowls[-2] == "/":
        frame_score += 10 if bowls[-1] == "X" else int(bowls[-1])
    else:
        frame_score += int(bowls[-2]) + int(bowls[-1])

    score += frame_score
    bowls = bowls.replace("X", "0").replace("/", "0", 1)
    frame -= 1

print(score)