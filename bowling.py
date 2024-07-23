```
def bowling_score(score_str):
    score = 0
    frames = score_str.split('/')
    
    for frame in frames:
        if '/' not in frame: # Single roll or strike
            if int(frame) == 10: # Strike, add 10 plus the next two rolls
                score += 10 + int(frames[frames.index(frame)+1].split('-')[0]) + int(frames[frames.index(frame)+2].split('-')[0])
            else:
                score += int(frame)
        else: # Multiple rolls or spare
            frame_rolls = [int(x) for x in frame.split('-')]
            if sum(frame_rolls) == 10: # Spare, add 10 plus the next roll
                score += 10 + max(0, sum(frame_rolls[1:]) - 10)
            else:
                score += sum(frame_rolls)

    return score