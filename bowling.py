```python
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.replace("-", "").split("/"):
        if frame == "X":
            score += 10
            roll += 2
        elif frame == "/":
            continue  
        elif len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
        else:  
            score += 10
            roll += 3
    return score