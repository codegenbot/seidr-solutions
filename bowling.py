def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10
            score += int(bowls[bowl_index + 1]) if bowls[bowl_index + 1] != "X" else 10
            score += int(bowls[bowl_index + 2]) if bowls[bowl_index + 2] != "X" else 10
            bowl_index += 1
        elif "/" in bowls[bowl_index:bowl_index + 2]:
            score += 10
            if bowls[bowl_index] == "/":
                score += 10
            else:
                score += int(bowls[bowl_index])
            score += int(bowls[bowl_index + 2])
            bowl_index += 2
        else:
            score += int(bowls[bowl_index]) + int(bowls[bowl_index + 1])
            if bowls[bowl_index + 1] == "-":
                score -= int(bowls[bowl_index + 1])
            bowl_index += 2
        frame += 1
    return score

bowls = input()
print(bowling_score(bowls))