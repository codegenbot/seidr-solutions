```
def bowling_score(frames):
    score = 0
    roll = 1
    previous_frame = []
    
    for frame in frames.split('/'):
        if len(frame) == 1:
            first_roll = int(frame)
            if roll < 10 and first_roll + sum(previous_frame) <= 10:
                score += first_roll + sum(previous_frame)
                previous_frame = []
                roll += 1
            else:
                score += first_roll * 10 + 10
                previous_frame = [first_roll]
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll < 10 and (first_roll + second_roll) <= 10:
                score += first_roll + second_roll
                previous_frame = []
                roll += 1
            elif first_roll == 10:  
                score += 10 + 10 + 10
                previous_frame = [10]
                roll += 2
            else:
                score += first_roll + second_roll
                previous_frame = [first_roll, second_roll]
                roll += 1
        if len(previous_frame) > 0 and sum(previous_frame) < 10:
            if roll < 10:
                if len(frame) == 1:
                    score += int(frame)
                else:
                    if frame[0] == '10':
                        score -= previous_frame.pop()
            else:
                score -= previous_frame.pop()
    return score