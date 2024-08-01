def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(10):
        if frames[frame_index] == "X":
            score += 30
            frame_index += 1
        elif frames[frame_index : frame_index + 2].count("/"):
            strike, spare = map(int, frames[frame_index : frame_index + 2].split("/"))
            score += strike + spare
            frame_index += 2
        else:
            first_roll, second_roll = map(int, frames[frame_index : frame_index + 2])
            if first_roll == 10:
                score += first_roll + second_roll
                frame_index += 2
            elif second_roll != "X":
                score += first_roll + second_roll
                frame_index += 2
            else:
                score += first_roll
                frame_index += 1
    return score