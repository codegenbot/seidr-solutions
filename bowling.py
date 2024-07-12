def bowling_score(bowls):
    score = 0
    bowl_index = 0

    while bowl_index < len(bowls):
        if bowls[bowl_index] == "X":
            score += 10
            score += sum(map(lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0, bowls[bowl_index + 1:bowl_index + 3]))
            bowl_index += 1
        elif bowls[bowl_index] == "/":
            score += 10 - int(bowls[bowl_index - 1])
            if bowls[bowl_index + 1] == "X":
                score += 10
            else:
                score += int(bowls[bowl_index + 1]) if bowls[bowl_index + 1].isdigit() else 0
            bowl_index += 2
        else:
            score += sum(map(lambda x: int(x) if x.isdigit() else 0, bowls[bowl_index:bowl_index + 2]))
            bowl_index += 2

    return score