```
def bowling_score(frames):
    score = 0
    prev_frame_value = 0
    
    for frame in frames.split("/"):
        if len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            
            if first_roll + second_roll == 10:
                score += first_roll + second_roll + prev_frame_value
            else:
                score += first_roll + second_roll
                
        elif len(frame) == 1:
            score += 10
            
        prev_frame_value = first_roll + second_roll
        
    return score