def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 10 + (10 - int(frames[i - 1]) if i > 0 else 0)
        elif frames[i] == "/":
            first_roll = int(frames[i - 1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
        else:
            first_roll = int(frames[i])
            if frames[i + 1] == "X":
                score += 10 + first_roll
            elif frames[i + 1] == "/":
                second_roll = 10 - int(frames[i + 1])
                score += first_roll + second_roll
            else:
                score += first_roll + int(frames[i + 1])
        if frame_count < 10 and (frames[i : i + 2] in ["--", "X-", "-X"]):
            score -= 5
        frame_count += 1
    return score