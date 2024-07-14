```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for frame in frames.split('/'):
        if len(frame) > 1 and int(frame[0]) == 10:
            score += 10 + 10 - 2 if frame_count < 9 else 20
            frame_count += 1
        elif frame.isdigit():
            score += sum(int(char) for char in frame)
            frame_count += 1
        elif frame == 'X':
            score += 10
            frame_count += 1
        else:
            if int(frame[0]) + int(frame[1]) == 10:
                score += 10 + int(frame[1])
            else:
                score += sum(int(char) for char in frame)
            frame_count += 1
    return score