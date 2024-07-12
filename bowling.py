def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10 and bowl_index < len(bowls):
        if bowls[bowl_index] == "X":
            score += (
                10
                + (10 if bowls[bowl_index + 2] == "X" else 0)
                + (
                    int(bowls[bowl_index + 1])
                    if bowls[bowl_index + 1].isdigit()
                    else 10
                )
            )
            bowl_index += 1
        elif bowls[bowl_index] == "/":
            score += (
                10
                - int(bowls[bowl_index - 1])
                + (
                    int(bowls[bowl_index + 1])
                    if bowls[bowl_index + 1].isdigit()
                    else 10
                )
            )
        else:
            score += int(bowls[bowl_index])
        if bowls[bowl_index] != "X":
            bowl_index += 1
        frame += 1
    return score


bowls = input()
print(bowling_score(bowls))