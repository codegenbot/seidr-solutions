def bowling_score(frames):
    score = 0
    frame_count = 1
    for frame in frames:
        if frame == "X":
            score += 30
            frame_count -= 1
        elif frame == "/":
            score += 10 + int(frames[frames.index(frame) - 1])
            frame_count -= 1
        else:
            strike = False
            spare = False
            for i in range(3):
                if i < 2 and frame[i] != "X" and frame[i] != "/":
                    if int(frame[i]) == 10:
                        score += 10 + (i + 1) * 10
                        strike = True
                        break
                    else:
                        score += int(frame[i])
                elif i == 2 and frame[0] == "X" or frame[0] == "/":
                    if frame_count < 9:
                        spare = True
            if not strike and not spare:
                score += sum(map(int, list(frame)))
        frame_count -= 1
    return score