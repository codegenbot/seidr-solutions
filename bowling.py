```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for frame in frames:
        if frame == 'X':
            score += 30
        elif frame == '/':
            score += 10 + int(frames[frames.index(frame) - 1])
        elif frame.isdigit():
            score += int(frame)
        else:
            first_roll = int(frame.split('/')[0])
            second_roll = 10 - first_roll
            if frame.endswith('/'):
                score += first_roll + second_roll
            else:
                score += first_roll + second_roll // 2
        if frame == 'X' or (frame.isdigit() and '/' in frames[frames.index(frame) + 1]):
            frame_number = min(10, frame_number + 1)
    return score