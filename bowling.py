def calculate_score(bowls):
    score = 0
    frames = []
    frame_index = 0
    
    for bowl in bowls:
        if bowl == "X":
            frames.append((10, 0))
        elif bowl == "/":
            frames[frame_index] = (frames[frame_index][0], 10 - frames[frame_index][0])
        elif bowl == "-":
            frames.append((0, 0))
        else:
            frames.append((int(bowl), 0))
        
        if len(frames) > 1 and frames[frame_index - 1][0] == 10:
            if frames[frame_index - 1][1] == 0:
                frames[frame_index - 1] = (10 + frames[frame_index][0], frames[frame_index][0])
            else:
                frames[frame_index - 1] = (10 + frames[frame_index][0] + frames[frame_index - 1][1], frames[frame_index][0])
        
        if len(frames) > 2 and frames[frame_index - 2][0] == 10 and frames[frame_index - 1][0] == 10:
            if frames[frame_index - 2][1] == 0:
                frames[frame_index - 2] = (20 + frames[frame_index][0], frames[frame_index][0])
            else:
                frames[frame_index - 2] = (20 + frames[frame_index][0] + frames[frame_index - 2][1], frames[frame_index][0])
        
        frame_index += 1
        
        if frame_index == 10:
            break
    
    for frame in frames:
        score += frame[0] + frame[1]
    
    return score