Here is the modified code:

```python
def bowling_score(frames):
    score = 0
    frames = [int(x) for x in frames.split('/')]
    frame_scores = []
    for i in range(0, len(frames), 2):
        if i + 1 < len(frames):
            first_roll = frames[i]
            second_roll = frames[i+1]
            if first_roll + second_roll == 10:
                frame_scores.append(10)
            else:
                frame_scores.extend([first_roll, second_roll])
        else:
            frame_scores.append(frames[i])
    for i in range(len(frame_scores) // 2):
        roll1 = frame_scores[2*i]
        if 2 * (i + 1) < len(frame_scores):
            roll2 = frame_scores[2*i+1]
            if roll1 + roll2 == 10:
                score += 10
            else:
                score += roll1 + roll2
        else:
            score += roll1
    remaining = frame_scores[-1]
    score += remaining
    return score