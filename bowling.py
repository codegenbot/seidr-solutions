```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            if int(frame) == 10:  
                score += 10 + 10 + 10 if i < 8 else 10 + 10 + (int(next_frames[i]) if i < 9 else 0)
            else:
                score += int(frame) * 2
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if first_roll == 10:  
                score += 10 + 10 + (int(next_frames[i]) if i < 9 else 0)
            elif second_roll == 10:  
                score += 10 + 10
            else:
                score += first_roll + second_roll
        elif len(frame) == 3:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            third_roll = int(frame[2])
            if first_roll == 10:  
                score += 10 + 10 + 10
            else:
                score += first_roll + second_roll + third_roll

    def next_frames(frames):
        return frames[:i+1].split("/")[-1]

    return score