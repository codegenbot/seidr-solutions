def bowling_score(bowls):
    score = 0
    frame = 0
    bowl_index = 0

    while frame < 10:
        if bowls[bowl_index] == "X":
            score += 10
            if bowl_index + 2 < len(bowls):
                if bowls[bowl_index + 2] == "X":
                    score += 10
                elif bowls[bowl_index + 2] != "-":
                    score += int(bowls[bowl_index + 2])
                if bowls[bowl_index + 1] == "X" and bowl_index + 3 < len(bowls):
                    score += 10
                else:
                    score += int(bowls[bowl_index + 1])
            bowl_index += 1
            frame += 1
        elif bowls[bowl_index] == "/":
            score += 10
            score += int(bowls[bowl_index + 1])
            bowl_index += 2
            frame += 1
        else:
            if bowls[bowl_index] != "-":
                score += int(bowls[bowl_index])
            if bowls[bowl_index + 1] == "/":
                score += 10 - int(bowls[bowl_index])
            bowl_index += 2
            frame += 1

    return score