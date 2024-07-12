def bowling_score(bowls):
    score = 0
    bowl_index = 0
    frame = 1

    while bowl_index < len(bowls) and frame < 10:
        if bowls[bowl_index] == "X":
            score += 10
            score += sum(map(lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0, bowls[bowl_index + 1:bowl_index + 3]))
            bowl_index += 1
            if frame == 9:
                score += sum(map(lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0, bowls[bowl_index + 1:bowl_index + 3]))
        elif bowls[bowl_index] == "/":
            score += 10
            score += 10 if bowls[bowl_index + 2] == "X" else int(bowls[bowl_index + 2])
            bowl_index += 2
        else:
            score += sum(map(lambda x: int(x) if x.isdigit() else 0, bowls[bowl_index:bowl_index + 2]))
            bowl_index += 2

        if bowls[bowl_index - 1] in ["X", "/"]:
            frame += 1

    return score