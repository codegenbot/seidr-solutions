```
def bowling_score(frames):
    score = 0
    prev_frame = None
    for i in range(10):
        frame = frames[i*2:i*2+2]
        if "/" in frame:
            left, right = map(int, frame.split("/"))
            if left == 10:
                strike = True
            elif left + right == 10:
                spare = True
            score += sum(map(int, [frame[0], prev_frame[1]]))
        else:
            left, right = map(int, frame)
            if left + right == 10:
                spare = True
            score += sum(map(int, frame))
        if strike:
            score += sum(map(int, frames[(i+1)*2:(i+3)*2]))
            if (i+1)<10 and not strike and not spare:
                score += sum(map(int, frames[(i+2)*2:(i+3)*2]))
        elif spare:
            score += 10 + sum(map(int, frames[(i+1)*2:(i+2)*2]))
        prev_frame = frame
    return score