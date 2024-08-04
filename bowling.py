def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            strike = False
            if frames[i] == "X":
                strike = True
            elif frames[i + 1] == "/":
                frame_points = int(frames[i]) + 10 - int(frames[i + 1][1])
            else:
                frame_points = (
                    int(frames[i])
                    + int(frames[i + 1][0])
                    + int(frames[i + 1][1])
                    - int(frames[i + 1][2:])
                )
            score += frame_points
            if not strike:
                score += 10
        else:
            split = list(map(int, frames[i].split("/")))
            score += sum(split)
    return score