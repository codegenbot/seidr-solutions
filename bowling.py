```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames):
        if '/' in frame:
            first_roll = int(frame.split('/')[0])
            second_roll = 10 - first_roll
            if 'X' in frame or 'x' in frame:
                if i == 9:
                    score += 10 + second_roll
                else:
                    score += 10 + first_roll
            else:
                score += first_roll + second_roll
        elif 'X' in frame or 'x' in frame:
            if i < 8 and '/' not in frames[i+1]:
                score += 10 + int(frames[i+1].split('/')[0])
            else:
                score += 10
        else:
            for char in frame:
                if char == 'X' or char == 'x':
                    score += 10
                    break
                else:
                    score += int(char)
    return score