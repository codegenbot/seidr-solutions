def bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0
    while frame <= 10:
        if bowls[bowl_index] == "X":
            score += 10 + get_strike_bonus(bowls, bowl_index)
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10
            bowl_index += 2
        else:
            score += get_frame_score(bowls, bowl_index)
            bowl_index += 2
        frame += 1
    return score


def get_strike_bonus(bowls, index):
    if index + 2 < len(bowls):
        if bowls[index + 2] == "X":
            return 10
        elif bowls[index + 2] == "/":
            return 10 - int(bowls[index + 1])
        else:
            return int(bowls[index + 1]) + int(bowls[index + 2])
    return 0


def get_frame_score(bowls, index):
    if bowls[index + 1] == "/":
        return 10
    return int(bowls[index]) + int(bowls[index + 1])


bowls = input().strip()
print(bowling_score(bowls))