```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split()):
        if len(frame) == 2 and frame[1] == '/':
            first_roll = int(frame[:1])
            second_roll = 10 - first_roll
            if frame[0] == 'X' or frame[0] == 'x':
                score += 10 + (second_roll if i < 9 else second_roll)
            else:
                score += first_roll + second_roll
        elif frame[0] == 'X' or frame[0] == 'x':
            score += 10
            if len(frames.split()) > i + 1 and frames.split()[i+1][0] == 'X' or frames.split()[i+1][0] == 'x':
                score += 10
        else:
            for char in frame:
                if char == 'X' or char == 'x':
                    score += 10
                    break
                else:
                    score += int(char)
    return score