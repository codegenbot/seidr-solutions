def get_strike_bonus(bowls, index):
    score = 10
    if bowls[index + 1] == "X":
        score += 10
        if bowls[index + 2] == "X" and index + 3 < len(bowls):
            score += 10
            if bowls[index + 3] != "X":
                score += int(bowls[index + 3])
        else:
            score += int(bowls[index + 2])
            score += int(bowls[index + 3]) if bowls[index + 3] != "-" else 0

        index += 1  # Increment index only when a strike is encountered
    elif bowls[index + 1] == "/":
        score += 10
    else:
        score += int(bowls[index + 1])
        score += int(bowls[index + 2]) if bowls[index + 2] != "-" else 0

    index += 2  # Move to the next frame irrespective of the previous conditions

    return score, index