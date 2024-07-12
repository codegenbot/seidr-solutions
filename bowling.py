```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        four = list(map(int, frames[i:i+2]))
        
        if 'X' in str(four): 
            score += 10
            if i < 18:
                four = list(map(int, frames[i+2:i+4]))
                score += max(four)
        elif '/' in str(four): 
            first_roll = int(frames[i])
            second_roll = int(frames[i+1].replace('/', str(int(frames[i]))))
            score += first_roll + second_roll
        else: 
            score += sum(four) + (i < 18 and 2 or 1)
        
        frame_count = i // 2 + 1
    
    return score