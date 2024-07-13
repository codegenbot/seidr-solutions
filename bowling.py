```
def bowling_score(frames):
    score = 0
    frame_score = 0
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 30
            frame_score = 10
        elif frames[i] == '/':
            score += frame_score
            frame_score = 0
        else:
            num_pins = int(frames[i])
            score += min(num_pins, 10) + frame_score
            if num_pins >= 10:
                score += min(10 - num_pins, 10)
            frame_score = num_pins
    return score