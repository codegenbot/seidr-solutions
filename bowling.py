bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0
frame = 9
while frame >= 0:
    frame_score = 0
    for index in range(0, len(bowls), 2):
        if bowls[index] == "X":
            frame_score += 10 + sum(map(lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0, bowls[index + 1:index + 3]))
        elif bowls[index + 1] == "/":
            frame_score += 10
        else:
            if bowls[index] != '-':
                frame_score += int(bowls[index]) + int(bowls[index + 1])

    score += frame_score
    bowls = bowls.replace("X", "0").replace("/", "0", 1)
    frame -= 1

print(score)