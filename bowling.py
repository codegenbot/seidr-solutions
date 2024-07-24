def bowling_score(frames):
    score = 0
    roll_count = 1
    for frame in frames:
        if frame == "X":
            score += 30
            roll_count = 1
        elif frame == "/":
            score += 10 + int(list(frame)[0])
            roll_count = 1
        else:
            if len(frame) > 1 and frame[0] == "/":
                score += 10 + int(list(frame)[0]) - 5
                roll_count = 1
            elif len(frame) > 1:
                score += sum(map(int, frame))
                roll_count = 2
            else:
                score += int(frame)
                roll_count = 1
    return score