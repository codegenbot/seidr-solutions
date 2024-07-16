```
def bowling_score(frames):
    score = 0
    frame = 1
    while frame <= len(frames):
        if frames[frame - 1] == 'X':
            score += 10 + (10 if frame < 10 else 0)
            frame += 1
        elif frames[frame - 1].isdigit():
            strike_count = 0
            for i in range(frame, min(frame + 2, len(frames) + 1)):
                if frames[i - 1] == 'X':
                    strike_count += 1
                    break
                else:
                    strike_count += int(frames[i - 1])
            score += strike_count
            frame = i
        else:
            first_roll = int(frames[frame - 1].split('/')[0])
            second_roll = int(frames[frame - 1].split('/')[-1])
            if first_roll + second_roll == 10:
                score += 10
            elif first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
            frame += 1
    return score