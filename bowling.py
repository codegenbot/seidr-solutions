def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += (
                10
                + (
                    10
                    if bowls[bowl_index + 2] == "X"
                    else (
                        int(bowls[bowl_index + 2])
                        if bowls[bowl_index + 2] != "-"
                        else 0
                    )
                )
                + (
                    10
                    if bowls[bowl_index + 4] == "X"
                    else (
                        int(bowls[bowl_index + 4])
                        if bowls[bowl_index + 4] != "-"
                        else 0
                    )
                )
            )
            bowl_index += 2
        elif bowls[bowl_index + 1] == "/":
            score += 10 + (
                10
                if bowls[bowl_index + 2] == "X"
                else int(bowls[bowl_index + 2]) if bowls[bowl_index + 2] != "-" else 0
            )
            bowl_index += 2
        else:
            score += (
                int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
                if bowls[bowl_index + 1] != "-"
                else int(bowls[bowl_index])
            )
            bowl_index += 2
        frame += 1
    return score


bowls = input()
print(bowling_score(bowls))