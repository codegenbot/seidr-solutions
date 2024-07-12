def bowling_score(bowls):
    score = 0
    bowl_index = 0

    for frame in range(1, 11):
        if bowls[bowl_index] == "X":
            score += 10
            if bowls[bowl_index + 1] == "X":
                score += 10
                if bowls[bowl_index + 2] == "X":
                    score += 10
                else:
                    score += (
                        int(bowls[bowl_index + 2])
                        if bowls[bowl_index + 2].isdigit()
                        else 0
                    )
            else:
                if bowls[bowl_index + 2] == "/":
                    score += 10
                else:
                    score += (
                        int(bowls[bowl_index + 1])
                        if bowls[bowl_index + 1].isdigit()
                        else 0
                    )
                    score += (
                        int(bowls[bowl_index + 2])
                        if bowls[bowl_index + 2].isdigit()
                        else 0
                    )
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10
            if frame == 10:
                score += (
                    int(bowls[bowl_index + 2]) if bowls[bowl_index + 2].isdigit() else 0
                )
            else:
                score += (
                    int(bowls[bowl_index + 2]) if bowls[bowl_index + 2].isdigit() else 0
                )
            bowl_index += 2
        else:
            score += int(bowls[bowl_index]) if bowls[bowl_index].isdigit() else 0
            score += (
                int(bowls[bowl_index + 1]) if bowls[bowl_index + 1].isdigit() else 0
            )
            bowl_index += 2

    return score