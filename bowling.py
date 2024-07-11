def bowling(input_str):
    score = 0
    frames = input_str.split("/")
    
    for i, frame in enumerate(frames):
        if i < 10:
            for roll in frame:
                if roll == "X":
                    score += 10
                    if i < 9:
                        next_frame = frames[i+1]
                        if len(next_frame) >= 2:
                            if next_frame[0] == "X":
                                score += 10
                            else:
                                score += int(next_frame[0])
                        else:
                            score += int(next_frame)
                    if len(frames[i+1]) == 1 and i < 9:  # For strike in last frame
                        score += int(frames[i+2][0])
                elif roll == "-":
                    score += 0
                else:
                    score += int(roll)
    return score