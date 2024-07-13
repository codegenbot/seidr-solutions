def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == "X": 
            score += 10 + int(frames[i+1]) + int(frames[i+2])
            i += 3
        elif frames[i] == "/":
            score += 10 + int(frames[i+1])
            i += 2
        else:
            frame_score = 0
            if len(frames[i:]) >= 2 and (frames[i] == "2" or frames[i] == "3" or frames[i] == "4" or frames[i] == "5" or frames[i] == "6" or frames[i] == "7" or frames[i] == "8"):
                frame_score = 10 + int(frames[i+1])
                i += 2
            else:
                frame_score = int(frames[i])
                if len(frames[i:]) >= 2:
                    frame_score += int(frames[i+1])
                i += 2
            score += frame_score
    return score