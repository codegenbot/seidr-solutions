def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i : i + 2].startswith("XX"):
            score += 40
        else:
            frame_score = int(frames[i]) + int(frames[i + 1])
            if frame_score < 10:
                score += frame_score
            elif frame_score == 10:
                score += 10
            else:
                first_roll = int(frames[i])
                second_roll = int(frames[i + 1])
                score += first_roll + second_roll
    return score