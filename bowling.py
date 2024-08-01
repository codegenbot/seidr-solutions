def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
            frame_count -= 1
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
            frame_count -= 1
        else:
            strike = False
            if i < len(frames) - 2 and frames[i : i + 3] == "XXX":
                score += 30
                strike = True
            elif i < len(frames) - 1 and frames[i : i + 2] in ["X/"]:
                score += 10 + int(frames[i + 1])
                strike = True
            else:
                score += int(frames[i]) + int(frames[i + 1])
            if not strike:
                frame_count -= 1
    return score if frame_count == 0 else score + 10 * (5 - frame_count)