```
def bowling_score(frames):
    score = 0
    frames = [frame.strip() for frame in frames.split("\n")]
    for i, frame in enumerate(frames):
        if len(frame) == 2:
            if frame[0] == "X":
                score += 10
                if i < 9:
                    next_frame = frames[i + 1]
                    if next_frame[0] == "X" or (len(next_frame) > 1 and next_frame[1] != "/"):
                        score += 10
            elif frame[1] == "/":
                score += 10 - int(frame[0])
        else:
            score += int(frame)
    return score

print(bowling_score("8-324333X518-3463X83"))