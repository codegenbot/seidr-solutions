```
def bowling_score(frames):
    score = 0
    for i in range(len(frames)):
        frame = frames[i]
        if '/' in frame:
            left_pins = int(frame[:frame.index('/')])
            right_pins = 10 - int(frame[frame.index('/') + 1:])
            if left_pins == 10: 
                score += 10 + (right_pins if i < 9 else 0)
            elif left_pins + right_pins == 10:
                score += left_pins + right_pins
            else:
                score += left_pins + right_pins
        else:
            score += int(frame) * 10
    return score