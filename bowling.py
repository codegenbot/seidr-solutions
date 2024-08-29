```
def bowling_score(frames):
    score = 0
    next_frame = ""
    for i in range(0, len(frames), 2):
        if frames[i] == "X":
            score += 10
            if i < 9:
                next_frame = frames[i + 1]
            frame_scores = [10]
            if next_frame != "":
                if next_frame == "X":
                    score += 10 + int(frames[i + 2]) + int(frames[i + 3])
                    frame_scores.append(10 + int(frames[i + 2]))
                    frame_scores.append(int(frames[i + 3]))
                elif next_frame == "/":
                    score += 10 + int(next_frame[1])
                    frame_scores.extend([10, int(next_frame[1])])
        elif frames[i] == "/":
            score += 10 + int(frames[i + 1])
            frame_scores = [10, int(frames[i + 1])]
        else:
            score += sum(map(int, list(frames[i:i+2])))
            frame_scores = list(map(int, list(frames[i:i+2])))
        if len(frame_scores) == 2 and sum(frame_scores) < 10:
            if i < 9:
                next_frame = frames[i + 1]
            if next_frame == "X":
                score += 10 + int(frames[i + 2]) + int(frames[i + 3])
                frame_scores.extend([int(frames[i + 2]), int(frames[i + 3])])
            elif next_frame == "/":
                score += 10 + int(next_frame[1])
                frame_scores.extend([10, int(next_frame[1])])
    return score