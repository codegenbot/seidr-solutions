```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split()):
        if len(frame) == 2 and frame[1] == '/':
            first_roll = int(frame[:1])
            second_roll = 10 - int(frame[:1])
            if frame[0] == 'X' or frame[0] == 'x':
                score += 10 + (second_roll if roll == 1 else 10)
            elif frame[0] == str(first_roll) and frame[1] == '/':
                score += first_roll + second_roll
        elif frame[0] == 'X' or frame[0] == 'x':
            score += 10
        else:
            score += sum(int(char) for char in frame)
    return score