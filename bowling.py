score = 0
bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

frame = 9
if frame == 9:
    for bowl_index, bowl in enumerate(bowls):
        score += (
            sum(
                map(
                    lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0,
                    bowls[bowl_index + 1 : bowl_index + 3],
                )
            )
            + int(bowls[-1])
            if bowls[-1].isdigit()
            else 0
        )