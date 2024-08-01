def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            split_frame = frames[i * 2 : i * 2 + 2].split("/")
            if len(split_frame) > 1:
                score += sum(map(int, split_frame)) + (
                    10 - int(split_frame[0]) - int(split_frame[1])
                )
        else:
            score += int(frames[i * 2])
    return score