bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0
index = 0

for _ in range(10):
    if bowls[index] == "X":
        score += 10 + sum(
            (10 if x == "X" else int(x) for x in bowls[index + 1 : index + 3])
        )
        index += 1
    elif bowls[index + 1] == "/":
        score += 10
        index += 2
    else:
        score += int(bowls[index]) + int(bowls[index + 1])
        index += 2

print(score)