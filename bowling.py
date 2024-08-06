def bowling_score(frames):
    score = 0
    frame_index = 0
    for i in range(1, 11):
        if frames[frame_index] == "X":
            score += 30
            frame_index += 1
        elif frames[frame_index : frame_index + 2].isdigit():
            strike = False
            if (
                len(frames[frame_index : frame_index + 2]) > 1
                and frames[frames.index(frames[0], frame_index) + 1] == "/"
            ):
                strike = True
            score += int(frames[frame_index : frame_index + 2])
            if not strike:
                frame_index += 2
            else:
                frame_index += 1
        elif frames[frame_index] == "/":
            score += 10
            frame_index += 1
    return score