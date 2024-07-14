```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(map(int, frames.split('/'))):
        if len(frame) == 1:
            score += 10 + (10 - 2) * (i < 9)
        else:
            ones = int(frame[0])
            twos = int(frame[1])
            if ones + twos == 10:
                score += ones + twos
            elif ones == 10:
                score += ones + twos
            else:
                score += ones + twos
    return score