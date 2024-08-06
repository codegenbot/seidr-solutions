```
def bowling(score):
    score = score.replace('/', '')
    frames = [int(x) if x.isdigit() else 10 for x in score]
    total_score = 0
    frame_number = 1
    while frames:
        if frames[0] == 10:  # Strike
            total_score += 10 + (frames[1] + frames[2]) if len(frames) > 1 else 10
            frames = frames[2:]
        elif sum(frames[:2]) >= 10:  # Spare
            total_score += 10 + frames[-1]
            frames = frames[2:]
        else:
            total_score += sum(frames[:2])
            frames = frames[2:]
    return total_score