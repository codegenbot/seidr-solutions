bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0

for frame in range(9):
    score += (
        sum(
            map(
                lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0,
                bowls[bowl_index + 1 : bowl_index + 3],
            )
        )
    )

score += (
    sum(
        map(
            lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0,
            bowls[-3:],
        )
    )
)

print("The score for the round is:", score)