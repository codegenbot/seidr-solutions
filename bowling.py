def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == "X":
            score += 10 + (10 if i < 10 else 0)
            frame_index += 1
        elif "/" in frames[frame_index]:
            strike, spare = map(int, frames[frame_index].split("/"))
            score += strike + spare
            frame_index += 1
        else:
            ones, twos = map(int, frames[frame_index])
            if i < 10:
                score += ones + twos
            frame_index += 1
    return score