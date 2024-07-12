bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")
score = 0
frame = 9
frame_score = 0

while frame >= 0:
    if not bowls:
        break

    if bowls[0] == "X":
        frame_score += 10 + sum(
            map(lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0, bowls[1:4])
        )
        bowls = bowls[1:]
    elif "/" in bowls:
        index = bowls.index("/")
        frame_score += 10 - int(bowls[index - 1])
        bowls = bowls[index + 1 :]
    else:
        frame_score += sum(int(x) for x in bowls[:2])
        bowls = bowls[2:]

    score += frame_score
    frame_score = 0
    frame -= 1

print(score)