```
def bowling_score(frames):
    score = 0
    frames = [frame.strip() for frame in frames.split("\n")]
    current_frame_score = 0
    scores = []
    next_frames = []
    i = 0
    while i < len(frames):
        if len(frames[i]) == 2:
            if frames[i][0] == "X":
                score += 10 + (int(frames[i+1].split()[0]) + int(frames[i+2].split()[0]))
                scores.append(10 + (int(frames[i+1].split()[0]) + int(frames[i+2].split()[0])))
                i += 3
            elif frames[i][1] == "/":
                score += 10 - int(frames[i][0])
                current_frame_score = 10 - int(frames[i][0])
                scores.append(10 - int(frames[i][0]))
                next_frames.append(int(frames[i+1].split()[0]))
                i += 2
        elif len(frames[i]) == 1:
            if i < 9 and (int(frames[i]) + int(frames[i+1].split()[0])) >= 10:
                score += 10 + int(frames[i])
                current_frame_score = 10
                scores.append(10)
                next_frames.append(int(frames[i+1].split()[0]))
                i += 2
            else:
                if frames[i][0] == "X":
                    score += 10 + int(frames[i][0])
                    current_frame_score = 10
                    scores.append(10)
                    i += 1
                else:
                    score += int(frames[i][0]) + int(frames[i+1].split()[0])
                    current_frame_score = int(frames[i][0]) + int(frames[i+1].split()[0])
                    scores.append(int(frames[i][0]) + int(frames[i+1].split()[0]))
                    i += 2
        elif frames[i][0] == "X" or frames[i][1] == "/":
            score += current_frame_score
            next_frames.pop(0)
            i += 1
    return score