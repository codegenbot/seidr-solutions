def calculate_bowling_score(bowls):
    score = 0
    index = 0

    for frame in range(10):
        if bowls[index] == "X":
            score += 10 + get_strike_bonus(bowls, index + 1)
            index += 1
        elif bowls[index + 1] == "/":
            score += 10 + int(bowls[index + 2])
            index += 2
        else:
            score += get_frame_score(bowls, index)
            index += 2

    return score

def get_strike_bonus(bowls, next_index):
    if bowls[next_index] == "X":
        return 10
    else:
        return int(bowls[next_index])

def get_frame_score(bowls, index):
    frame_score = 0
    frame_score += int(bowls[index]) if bowls[index].isdigit() else 0
    frame_score += int(bowls[index + 1]) if bowls[index + 1].isdigit() else 0
    return frame_score