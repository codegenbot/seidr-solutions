```
import re

def bowling_score(frames):
    score = 0
    frames = frames.split("/")
    i = 0
    for frame in frames:
        if "X" in frame:
            if len(frames) > i+1 and "X" in frames[i+1]:
                score += 10 + int(frames[i+2].lstrip("0")) * 2
            else:
                score += 10
        elif "-" in frame:
            first_roll, second_roll = map(int, re.sub("[^0-9]", "", frame).split("-"))
            if i < 8 and "X" in frames[i+1]:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
        else:
            score += sum(map(int, frame))
        i+=1
    return score