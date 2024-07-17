```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split('/'):
        if len(frame) == 2 and int(frame[0]) + int(frame[1]) == 10:
            score += 10 + (10 - int(frame[0])) * frame_num
            frame_num += 1
        elif len(frame) == 1:
            score += int(frame)
            frame_num += 1
        else:
            first_roll = int(frame[0])
            if first_roll == 10:
                score += 10 + 10 * (10 - first_roll)
            else:
                score += first_roll
                second_roll = int(frame[1])
                score += second_roll
                if second_roll == 10:
                    score += 10 * frame_num
                elif first_roll + second_roll < 10:
                    for i in range(2, 11):
                        if i <= int(frame[0]) or i <= int(frame[1]):
                            continue
                        if i <= 10 - (first_roll + second_roll):
                            score += i
                            break
            frame_num += 1
    return score