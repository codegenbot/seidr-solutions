Here is the solution to the bowling problem:

```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
        else:
            frame_score = int(frames[i:i+2])
            score += frame_score
    return score