Here is the Python code for the bowling problem:

def bowling_score(frames):
    score = 0
    frame_count = 1
    for frame in frames:
        if frame == 'X':
            score += 30
            frame_count += 1
        elif '/' in frame:
            roll1, roll2 = map(int, re.split('/|\-X', frame))
            score += roll1 + roll2
            frame_count += 1
        else:
            for i in range(len(frame)):
                if frame[i] == 'X':
                    score += 10 + (i * 10)
                    frame_count += 1
                    break
                elif frame[i] == '/':
                    first_roll = int(frame[:i])
                    second_roll = 10 - first_roll
                    score += first_roll + second_roll
                    frame_count += 1
                    break
    return score