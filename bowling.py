def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 30
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
        else:
            strike = int(frames[i])
            next_two_frames = int(frames[i + 1]) + int(frames[i + 2])
            score += strike + next_two_frames
    return score