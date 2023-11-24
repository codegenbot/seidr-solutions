def calculate_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0

    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10

            if bowls[bowl_index + 2] == "X":
                score += 10

                if bowls[bowl_index + 4] == "X":
                    score += 10
                else:
                    score += int(bowls[bowl_index + 4])

            else:
                if bowls[bowl_index + 3] == "/":
                    score += 10
                else:
                    score += int(bowls[bowl_index + 2]) + int(bowls[bowl_index + 3])

            bowl_index += 1

            if frame == 10:
                if bowls[bowl_index + 2] == "X":
                    score += 10
                else:
                    score += int(bowls[bowl_index + 2]) + int(bowls[bowl_index + 3])
                break

        elif bowls[bowl_index + 1] == "/":
            score += 10

            if bowls[bowl_index + 2] == "X":
                score += 10
            else:
                score += int(bowls[bowl_index + 2])

            bowl_index += 2

        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            bowl_index += 2

        frame += 1

    return score