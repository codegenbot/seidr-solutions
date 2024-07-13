```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames):
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = 10 - first_roll
            if 'X' in frame or 'x' in frame:
                if i == 9: 
                    score += 10 + first_roll
                else:
                    score += 10 + second_roll
            else:
                score += first_roll + second_roll
        elif 'X' in frame or 'x' in frame:
            if i == 0:
                score += 10
            else:
                score += 10
        else:
            frame_score = sum(int(char) for char in frame)
            if frame_score == 10:
                if i < 9:
                    score += 10
                else:
                    score += frame_score
            else:
                score += frame_score
    return score