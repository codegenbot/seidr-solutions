def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if i + 1 < len(frames) and frames[i] == "X" and frames[i + 1] != "-":
            score += calculate_frame_score(frames[i : i + 2]) + calculate_frame_score(
                frames[i + 2]
            )
        else:
            score += calculate_frame_score(frames[i : i + 2])
    return score


def calculate_frame_score(frame):
    if frame == "X":
        return 30
    elif frame.isdigit():
        return int(frame)
    else:
        return sum(map(int, frame.split("/")))