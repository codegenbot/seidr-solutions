bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0
frame = 9

while frame >= 0:
    frame_score = 0
    for index in range(0, min(len(bowls), frame*2+2), 2):
        frame_score += 10 if bowls[index] == "X" else 10 if bowls[index + 1] == "/" else 0 if bowls[index] == "-" else int(bowls[index])

    score += frame_score
    bowls = bowls.replace("X", "0").replace("/", "0", 1)
    frame -= 1

print(score)