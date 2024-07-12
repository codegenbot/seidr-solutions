    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        frame_roll = list(map(int, frames[i:i+2]))
        
        if 'X' in str(frame_roll):  
            if i < 18:
                score += 10 + max(frame_roll)
            else:
                score += 10 + max(frame_roll[1:])
        elif '/' in str(frame_roll):  
            roll1, roll2 = map(int, frame_roll)
            score += 10 + roll1
        else:  
            score += sum(frame_roll) + (i < 18 and 1 or 0)
        
        frame_count = (i // 2) + 1
    
    return score