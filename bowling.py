def bowling_score(frames):
    score = 0
    frame_scores = [int(x) for x in frames]
    for i in range(10):
        if frame_scores[i] == 10:
            if i < 9 and frame_scores[i + 1] == 10:
                score += 30
            else:
                score += 20 + frame_scores[i + 1]
        elif frame_scores[i] > 0:
            if i < 8 and frame_scores[i + 1] + frame_scores[i] > 10:
                score += 20
            else:
                score += frame_scores[i] + frame_scores[i + 1]
    return score