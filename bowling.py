```
def bowling_score(frames):
    score = 0
    prev_frame_pins = 0
    frame_count = 1
    
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            roll = 10 + prev_frame_pins
            prev_frame_pins = roll - prev_frame_pins
            score += roll
        elif frames[i] == '/':
            frame_roll = list(map(int, frames[i+1].split()))
            prev_frame_pins = 10 - sum(frame_roll)
            score += sum(frame_roll) + prev_frame_pins
        else:
            frame_rolls = [int(frame) for frame in frames[i:i+2]]
            if sum(frame_rolls) == 10:
                score += 11
            else:
                score += sum(frame_rolls)
        
    return score