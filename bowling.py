```
def bowling_score(frames):
    score = 0
    frame_count = 0
    
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif frame[0] != 'X':
            strike = int(frame[0])
            if len(frame) > 1 and frame[1] != 'X':
                spare = int(frame[1]) + strike
                score += spare
            else:
                score += strike + 10
        else:
            frame_count += 1
            score += 10
            if frame_count < 9:
                next_frame = frames.split('/')[frame_count+1]
                if len(next_frame) > 1 and next_frame[0] != 'X':
                    spare = int(next_frame[0]) + 10
                    score += spare
                else:
                    score += 10 + 10
        
    return score