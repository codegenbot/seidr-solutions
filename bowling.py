def bowling_score(frames):
    score = 0
    prev_frame = None
    frame_scores = []
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            if i < 9:
                if frames[i + 1] == "/":
                    score += 10
                    frame_scores.append(10)
                else:
                    score += (
                        10
                        + int(frames[i + 1])
                        + (int(frames[i + 2]) if i + 2 < len(frames) else 0)
                    )
                    frame_scores.append(10 + int(frames[i + 1]))
            elif i == len(frames) - 2 or frames[i + 1] == "X":
                score += 10 + 10 + (int(frames[i + 2]) if i + 2 < len(frames) else 0)
                frame_scores.append(
                    20 + int(frames[i + 2]) if i + 2 < len(frames) else 20
                )
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
            frame_scores.append(10 + int(frames[i + 1]))
        else:
            if i < 9 and frames[i + 1] != "X" and frames[i + 1] != "/":
                score += 10 + int(frames[i]) + int(frames[i + 1])
                frame_scores.append(10 + int(frames[i]) + int(frames[i + 1]))
            elif i == len(frames) - 2 or (i < 9 and frames[i + 1] == "X"):
                score += 10 + int(frames[i])
                frame_scores.append(10 + int(frames[i]))
    return score