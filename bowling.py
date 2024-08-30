def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split("/"):
        if len(frame) == 1: 
            score += 10 + (frame_num - 1) * 10
            frame_num += 1
        elif "X" in frame: 
            score += 10 + (frame_num - 1) * 10
            if len(frames.split("/")[1]) > 1 or "X" in frames.split("/")[1]:
                score += 10  
            frame_num += 1
        else: 
            if len(frame) == 2: 
                score += 10 + int(frame[0]) + (frame_num - 1) * 1
                frame_num += 1
            else:
                score += sum(map(int, frame))
                frame_num += 1
    return score