```
def bowling_score(frames):
    score = 0
    frames = [frame.strip() for frame in frames.split("\n")]
    last_roll = None
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == "X":
                score += 10
                if i < 9: 
                    last_roll = int(frames[i + 1].split()[0]) + int(frames[i + 1].split()[1])
                else: 
                    last_roll = int(frame[1])
                score += last_roll
            elif frame[1] == "/":
                score += 10 - int(frame[0])
        else:
            if i < 9 and (int(frame) + int(frames[i + 1].split()[0]) >= 10):
                score += 10 + int(frame)
            else: 
                score += int(frame) + int(frames[i + 1].split()[0])
    return score