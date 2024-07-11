def calculate_bowling_score(bowls):
    score = 0
    index = 0
    frame = 1

    while frame <= 10 and index < len(bowls):
        if bowls[index] == "X":
            score += 10
            score += get_strike_bonus(bowls, index)
            frame += 1
        else:
            score += int(bowls[index]) if bowls[index].isdigit() else 0

        index += 1

    return score

print(calculate_bowling_score("32XX7/534/X-66-1-"))