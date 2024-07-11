def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10 and bowl_index < len(bowls):
        if bowls[bowl_index] == "X":
            score += 10
            if frame < 10:
                score += get_value(bowls[bowl_index + 1])
                score += get_value(bowls[bowl_index + 2])
                bowl_index += 1
        elif bowls[bowl_index] == "/":
            score += 10 - get_value(bowls[bowl_index - 1])
            score += get_value(bowls[bowl_index + 1])
        else:
            score += get_value(bowls[bowl_index])
        bowl_index += 1
        if bowls[bowl_index - 1] in ["X", "/"]:
            frame += 1
    return score


def get_value(bowl):
    if bowl == "X":
        return 10
    elif bowl == "/":
        return 10
    elif bowl == "-":
        return 0
    else:
        return int(bowl)

bowls = input()
print(bowling_score(bowls))