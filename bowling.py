def bowling_score(frames):    
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            if frame < 10:
                score += int(frames[2*i+2].replace('/','0')) if 2*i+2 < len(frames) else 0 
        elif frames[i] == '/':
            score += 10
            if frame < 10:
                score += int(frames[2*i+1]) if 2*i+1 < len(frames) else 0 
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            score += first_roll + second_roll
            frame += 1
    return score