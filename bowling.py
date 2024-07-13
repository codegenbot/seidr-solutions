def bowling_score(frames):
    score = 0
    frame_count = 1
    for i in range(0, len(frames), 2):
        if frames[i].isdigit():
            if len(frames[i : i + 2]) == 3:
                score += 10
                frame_count -= 1
            else:
                score += int(frames[i])
        elif frames[i] == "/":
            first_roll = int(frames[:i].endswith("/"))
            second_roll = 10 - first_roll
            if frame_count == 9 and first_roll + second_roll > 10:
                score += 2 * (first_roll or 10)
            else:
                score += first_roll + second_roll
            frame_count -= 1
    return score