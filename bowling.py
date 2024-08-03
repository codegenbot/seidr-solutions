Here is the Python code for the problem:

def bowling_score(frames):
    score = 0
    frame_count = 1
    for frame in frames:
        if frame == 'X':
            score += 30
            frame_count += 1
        elif frame == '/':
            score += 10
            frame_count += 1
        else:
            if len(frame) > 1:
                roll1, roll2 = int(frame[0]), int(frame[1])
                if roll1 + roll2 == 10:
                    score += 10
                    frame_count += 1
                else:
                    score += roll1 + roll2
                    frame_count += 1
            else:
                score += int(frame)
                frame_count += 1
    return score