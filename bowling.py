```
def bowling_score(frames):
    score = 0
    frame_scores = []
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10
            frame_scores.append(10)
            if i < len(frames) - 1:
                score += int(frames[i + 1].replace("/", ""))
                frame_scores.append(int(frames[i + 1].replace("/", "")))
            if i < len(frames) - 2:
                score += int(frames[i + 2].replace("/", ""))
                frame_scores.append(int(frames[i + 2].replace("/", "")))
        elif frames[i] == "/":
            score += 10
            frame_scores.append(10)
            score += int(frames[i + 1].replace("/", ""))
            frame_scores.append(int(frames[i + 1].replace("/", "")))
        else:
            score_frame = sum(map(int, frames[i:i+2].split("/")))
            score += score_frame
            frame_scores.append(score_frame)
        i += 2
    return score