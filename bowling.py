def calculate_bowling_score(bowls):
    score = 0
    frame_index = 0

    for _ in range(10):
        if bowls[frame_index] == "X":
            score += 10 + get_strike_bonus(bowls, frame_index)
            frame_index += 1
        else:
            if bowls[frame_index+1] == "/":
                score += 10 + get_spare_bonus(bowls, frame_index)
            else:
                score += get_frame_score(bowls, frame_index)
            frame_index += 2

    return score