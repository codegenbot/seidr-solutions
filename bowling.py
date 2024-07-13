```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split()):
        if len(frame) == 2 and frame[1] == '/':
            first_roll = int(frame[:1])
            second_roll = 10 - first_roll
            if frame[0].upper() == 'X':
                score += 10 + (10 - first_roll)
            else:
                score += first_roll + second_roll
        elif frame.upper() == 'X':
            score += 10
        else:
            score += sum(int(char) for char in frame)
    return score