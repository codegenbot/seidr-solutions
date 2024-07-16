```
def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += int(frame)
            roll = 1
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            if roll == 1:
                score += first_roll + second_roll
            else:
                if first_roll == 10:
                    score += first_roll + second_roll
                else:
                    score += max(first_roll, second_roll) + min(first_roll, second_roll)
            roll = 0
        elif len(frame) > 2:
            strike_count = 1
            while len(frame) > 1 and int(frame[0]) == 10:
                frame = frame[1:]
                score += 10 + (10 if strike_count > 1 else min(int(i) for i in frame))
                strike_count -= 1
            frame_score = sum(map(int, frame))
            score += frame_score
    return score