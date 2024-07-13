```
def bowling(score):
    score = score.replace('/', '-')
    frames = [int(x) for x in score.split('-')]
    total_score = 0
    frame_number = 1
    
    while len(frames) > 0:
        if frame_number < 10:
            if frames[0] == 10: 
                total_score += 10 + 10
                frames.pop(0)
            elif sum(frames[:2]) >= 10:
                total_score += 10
                frames = frames[1:]
            else:
                total_score += frames[0]
                frames.pop(0)
        else:
            if len(frames) > 0: 
                total_score += frames[0] + (10 - frames[0])
                frames.pop(0)
        
        frame_number += 1
    return total_score