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
                    score += int(bowls[bowl_index + 2])
            else:
                score += int(bowls[bowl_index + 1]) + int(bowls[bowl_index + 2])
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10
            score += int(bowls[bowl_index + 2])
            bowl_index += 2
        else:
            if bowls[bowl_index] != "-":
                score += int(bowls[bowl_index])
            if bowls[bowl_index + 1] != "-":
                score += int(bowls[bowl_index + 1])
            bowl_index += 2

    return score

bowls = input()
print(bowling_score(bowls))