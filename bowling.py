bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0
index = 0

for _ in range(10):
    score += (10 + sum([10 if x == "X" else int(x) for x in bowls[index + 1:index + 3]])) if bowls[index] == "X" else (10 + (10 if bowls[index + 2] == "X" else int(bowls[index + 2]))) if bowls[index + 1] == "/" else ((10 if bowls[index] == "X" else int(bowls[index])) + (10 if bowls[index + 1] == "X" else (10 if bowls[index + 1] == "/" else int(bowls[index + 1])))
    index += 1 if bowls[index] == "X" else 2

print(score)