def get_strike_bonus(bowls, index):
    score = 10
    if bowls[index + 1] == "X":
        score += 10
        if bowls[index + 2] == "X":
            score += 10
            if bowls[index + 3] != "X":
                score += int(bowls[index + 3])
        elif bowls[index + 2] == "/":
            score += 10
        else:
            score += int(bowls[index + 2])

        index += 1  # Increment index to move to the next frame
    elif bowls[index + 1] == "/":
        score += 10 - int(bowls[index])

    else:
        score += int(bowls[index + 1])
        if bowls[index + 2] != "-":
            score += int(bowls[index + 2])

    index += 2  # Move to the next frame irrespective of the previous conditions

    return score, index