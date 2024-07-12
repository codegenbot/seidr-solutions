score = 0
bowls = input()

frame = 9
if frame == 9:
    for bowl_index, bowl in enumerate(bowls):
        if bowl == "/":
            score += 10 - int(bowls[bowl_index - 1])
        elif bowl == "X":
            score += 10 + (
                sum(
                    map(
                        lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0,
                        bowls[bowl_index + 1: bowl_index + 3],
                    )
                )
            )
        elif bowl.isdigit():
            score += int(bowl)

if bowls[-3] == "/":
    score += 10 - int(bowls[-2])

print(score)