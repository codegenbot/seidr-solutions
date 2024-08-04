def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10
            if frame < 10:
                score += sum(map(int, bowls[bowl_index + 1 : bowl_index + 3]))
                bowl_index += 1
            else:
                score += sum(
                    map(
                        lambda x: (
                            10
                            if x == "X"
                            else (
                                int(x) if x != "/" else 10 - int(bowls[bowl_index - 1])
                            )
                        ),
                        bowls[bowl_index + 1 :],
                    )
                )
        elif bowls[bowl_index + 1] == "/":
            score += 10
            if frame < 10:
                score += int(bowls[bowl_index + 2])
        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
        if bowls[bowl_index] != "X":
            bowl_index += 2
        else:
            bowl_index += 1
        frame += 1
    return score


bowls = input()
print(bowling_score(bowls))