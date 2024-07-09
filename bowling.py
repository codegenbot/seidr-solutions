def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X":
            score += 10 + int(frames[i+1:i+3].strip("/")) 
            i += 2
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = int(frames[i])
            if len(frames[i+1:i+3]) > 0 and (frames[i+1] == "X" or frames[i+1] == "/"):
                score += frame_score + 10
                i += 3
            elif len(frames[i+1:i+2]) > 0:
                score += frame_score + int(frames[i+1])
                i += 2
            else:
                score += frame_score
                i += 1
    return score