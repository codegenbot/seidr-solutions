```
def bowling_score(frames):
    score = 0
    frames = [list(map(int, frame.split())) for frame in frames.replace('/', ' ').split()]
    for i, frame in enumerate(frames):
        if len(frame) == 1:
            score += 10
        elif len(frame) == 2:
            score += sum(frame)
        else:
            first_two = sum(frame[:2])
            last_roll = frame[2]
            inner_score = 0
            j = i
            while len(frames[j]) > 0:
                if frames[j][0] == 10:
                    inner_score += 10 + sum(frames[j][1:3])
                    break
                elif frames[j][0] + first_two <= 10:
                    inner_score += frames[j][0] + first_two
                    break
                else:
                    inner_score += frames[j][0]
                    j += 1
            score += inner_score
    return score