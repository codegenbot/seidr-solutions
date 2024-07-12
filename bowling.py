def bowling_score(bowls):
    score = 0
    bowl_index = 0

    for frame in range(10):
        if bowls[bowl_index] == "X":
            score += 10
            score += sum(map(lambda x: 10 if x == "X" else int(x) if x.isdigit() else 0, bowls[bowl_index+1:bowl_index+3]))
            bowl_index += 1
        elif bowls[bowl_index+1] == "/":
            score += 10
            score += 10 if bowls[bowl_index+2] == "X" else int(bowls[bowl_index+2])
            bowl_index += 2
        else:
            score += sum(map(int, list(bowls[bowl_index:bowl_index+2])))
            bowl_index += 2

    return score