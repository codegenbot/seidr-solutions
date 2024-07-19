Here is the corrected code:

```Python
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if frame == 10:
                score += int(char)
            else:
                score += int(char)
            if frame < 10 and len(frames) - frames.index(str(char)) >= 2 and str(char) + frames[frames.index(str(char)) + 1].isdigit():
                frame += 1
        elif char == '/':
            first_roll = int(frames[:frames.index('/')])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 2
    return score