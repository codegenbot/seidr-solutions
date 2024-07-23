def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            strike = False
            spare = False
            if frames[i * 2] == "X":
                score += 10
                if i < 9:
                    score += int(frames[(i + 1) * 2]) + int(frames[(i + 1) * 2 + 1])
            elif int(frames[i * 2]) + int(frames[i * 2 + 1]) == "10":
                score += 10
                if i < 9:
                    next_frame = frames[(i + 1) * 2 : (i + 2) * 2]
                    if next_frame.startswith("X"):
                        score += 10
                    elif int(next_frame[0]) + int(next_frame[1]) == "10":
                        score += 10
            else:
                score += 10
        else:
            if frames[i * 2] == "X":
                score += 10
                if i < 9:
                    score += int(frames[(i + 1) * 2]) + int(frames[(i + 1) * 2 + 1])
            elif int(frames[i * 2]) + int(frames[i * 2 + 1]) == "10":
                score += 10
                if i < 9:
                    next_frame = frames[(i + 1) * 2 : (i + 2) * 2]
                    if next_frame.startswith("X"):
                        score += 10
                    elif int(next_frame[0]) + int(next_frame[1]) == "10":
                        score += 10
            else:
                score += int(frames[i * 2]) + int(frames[i * 2 + 1])
    return score