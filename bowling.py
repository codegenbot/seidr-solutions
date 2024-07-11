def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    frame_index = 0
    while frame <= 10:
        if bowls[frame_index] == "X":
            score += 10
            if frame < 10:
                score += get_value(bowls[frame_index + 1])
                if bowls[frame_index + 1] == "X":
                    score += get_value(bowls[frame_index + 2])
                else:
                    score += get_value(bowls[frame_index + 2], False)
                frame_index += 1
        elif bowls[frame_index + 1] == "/":
            score += 10
            score += get_value(bowls[frame_index + 2])
            frame_index += 2
        else:
            score += get_value(bowls[frame_index])
            score += get_value(bowls[frame_index + 1], False)
            frame_index += 2
        frame += 1
    return score


def get_value(bowl, is_strike=True):
    if bowl == "X":
        return 10
    elif bowl == "/":
        return 10 if is_strike else 10 - int(prev)
    elif bowl == "-":
        return 0
    else:
        return int(bowl)


bowls = input().strip()
print(calculate_bowling_score(bowls))