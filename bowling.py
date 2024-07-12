```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if i < 8:
                next_frames = frames[i+2:i+10]
                if 'X' in next_frames or '/' in next_frames:
                    score += 10 + 10
                else:
                    first_next_frame = list(map(int, next_frames[:2]))
                    if sum(first_next_frame) == 10:
                        score += 10 + sum(first_next_frame)
                    else:
                        score += 10 + sum(first_next_frame) + 10
            elif i == 8 and frames[i+1] != 'X':
                first_two_frames = list(map(int, frames[i-8:i]))
                if sum(first_two_frames) < 10:
                    score += 10 + sum(first_two_frames)
                else:
                    score += 20
        elif frames[i] == '/':
            roll = list(map(int, frames[i+1].split()))
            if sum(roll) == 10:
                score += sum(roll)
            else:
                score += sum(roll) + 10
        else:
            frame = list(map(int, frames[i:i+2]))
            if sum(frame) == 10:
                score += sum(frame)
            else:
                score += sum(frame) + 10
    return score