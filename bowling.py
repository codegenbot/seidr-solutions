def bowling_score(frames):
    score = 0
    for i in range(10):
        frame = frames[i * 2:i * 2 + 2].strip()
        if "X" in frame:
            if i < 9: 
                next_frame = frames[(i+1)*2:(i+2)*2].strip()
                score += 10
                if "X" in next_frame or "/" in next_frame:
                    score += 10
                elif len(next_frame) == 2:
                    score += int(next_frame[0])
            else: 
                score += 10
        elif "/" in frame:
            score += int(frame[0]) + int(frame[-1])
        else:
            score += int(frame[0]) + int(frame[-1])
    return score