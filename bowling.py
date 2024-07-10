def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")

    for i in range(len(frames)):
        if frames[i] == "X":
            score += 10
            if i < 9:
                if bowls[i + 1] == "X":
                    score += 10
                else:
                    score += get_frame_score(bowls[i + 1])
                if i == 8 and len(frames) == 10:
                    if bowls[i + 2] == "X":
                        score += 10
                    else:
                        score += get_frame_score(bowls[i + 2])
        else:
            score += get_frame_score(frames[i])

    return score


def get_frame_score(frame):
    frame_score = 0
    for bowl in frame:
        if bowl == "X":
            frame_score += 10
        elif bowl != "-":
            frame_score += int(bowl)
    return frame_score