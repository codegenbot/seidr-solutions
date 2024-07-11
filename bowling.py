def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_count = 0
    spare = False

    for bowl in bowls:
        if bowl == "X":
            score += 10
            if frame < 10:
                score += 10 if bowls[bowl_count + 1] == "X" else 0
                score += (
                    10
                    if bowls[bowl_count + 2] == "X" or bowls[bowl_count + 2] == "/"
                    else int(bowls[bowl_count + 2])
                )
                frame += 1
        elif bowl == "/":
            score += 10 - int(bowls[bowl_count - 1])
            score += 10 if bowls[bowl_count + 1] == "X" else int(bowls[bowl_count + 1])
        else:
            score += int(bowl)

        if bowl == "/":
            spare = True
        else:
            spare = False

        if frame < 10:
            if bowl != "X":
                bowl_count += 1
            if bowl != "/" and not spare:
                frame += 1

    return score


# Read input from user
bowls = input().strip()

# Calculate and print the score
print(bowling_score(bowls))