bowls = input("Enter the individual bowls in a 10-frame round of 10 pin bowling: ")

score = 0
frame = 9
bowl_index = 0

while frame >= 0:
    if bowls[bowl_index] == "/":
        score += 10 - int(bowls[bowl_index - 1])
    elif bowls[bowl_index] == "X":
        score += 10 + sum(
            map(
                lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0,
                bowls[bowl_index + 1 : bowl_index + 3],
            )
        )
        if bowls[bowl_index + 1] == "X":
            bowl_index += 2
        else:
            bowl_index += 1
    elif bowls[bowl_index].isdigit():
        score += int(bowls[bowl_index])
    
    if bowls[bowl_index] != "/":
        bowl_index += 1
    frame -= 1

print(score)