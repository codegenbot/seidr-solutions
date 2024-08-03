def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10 + sum(map(int, bowls[bowl_index + 1 : bowl_index + 3]))
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10 + int(bowls[bowl_index + 2])
            bowl_index += 2
        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            if bowls[bowl_index] != "-":
                score += 1 if bowls[bowl_index] == "/" else 0
            bowl_index += 2
        frame += 1
    return score


bowls = input()
print(bowling_score(bowls))