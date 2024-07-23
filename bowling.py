def bowling_score(frames):
    score = 0
    frame_count = 1
    i = 0

    while i < len(frames):
        if frames[i] == "X":
            if frame_count in [1, 2]:
                score += 10 * (frame_count + 1)
            else:
                score += 10 + int(frames[i+1]) + int(frames[i+2])
            i += 3
            frame_count = min(10, frame_count + 1)
        elif frames[i] == "/":
            if frame_count in [9, 10]:
                score += 10 + int(frames[i+2]) + int(frames[i+3])
            else:
                score += 10 + int(frames[i+1])
            i += 4
            frame_count = min(10, frame_count + 1)
        else:
            if frame_count == 10:
                break
            if frames[i] == "2" and frames[i+1] in ["/", "X"]:
                score += int(frames[i]) * 2
            elif int(frames[i]) + int(frames[i+1]) >= 10:
                score += 10
            else:
                score += int(frames[i]) + int(frames[i+1])
            i += 2
            frame_count += 1

    return score