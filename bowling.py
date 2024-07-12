score = 0
bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

frame = 10
if frame == 10:
    for bowl_index, bowl in enumerate(bowls):
        if bowl == "/":
            score += 10 - int(bowls[bowl_index - 1])
        elif bowl == "X":
            score += 10 + (
                sum(
                    map(
                        lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0,
                        bowls[bowl_index + 1 : bowl_index + 4],
                    )
                )
            )
        elif bowl.isdigit():
            score += int(bowl)

print(score)