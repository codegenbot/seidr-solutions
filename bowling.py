Here is the modified code:

def bowling_score(frames):
    score = 0
    frames = [int(i) for i in frames.replace('-', '0').split('/')]
    for i, frame in enumerate(frames):
        if len(str(frame)) == 1:
            score += 10
        elif len(str(frame)) == 2:
            if frame == 10:
                score += 10 + (10 - frame)
            else:
                score += frame
        else:
            first = frames[i]
            second = frames[i+1] if i < 8 else 10 - sum(frames[:i])
            score += first + second
    return score