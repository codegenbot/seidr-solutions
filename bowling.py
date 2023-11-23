def calculate_bowling_score(input_string):
    score = 0
    frames = input_string.split("-")
    
    for frame_index in range(len(frames)):
        frame = frames[frame_index]
        
        if frame == "X":
            score += 10
            if frame_index < len(frames) - 3:
                score += 10
                if frames[frame_index + 1] == "X":
                    score += 10
                else:
                    score += int(frames[frame_index + 1][0])
            elif frame_index == len(frames) - 3:
                score += 10
                if frames[frame_index + 1] == "X":
                    score += 10
                else:
                    score += int(frames[frame_index + 1][0])
                if frames[frame_index + 2] == "X":
                    score += 10
                else:
                    score += int(frames[frame_index + 2][0])
        elif "/" in frame:
            score += 10
            if frame_index < len(frames) - 1:
                score += int(frames[frame_index + 1][0])
        else:
            score += int(frame[0])
            if len(frame) > 1:
                score += int(frame[1])
    
    return score