```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_count < 8:
                score += 10 + 10
            else:
                score += 10
            frame_count += 1
        elif frames[i] == '/':
            roll = list(map(int, frames[i+1].split()))
            score += sum(roll) + (10 - sum(roll))
            frame_count += 1
        else:
            rolls = list(map(int, frames[i:i+2]))
            if sum(rolls) == 10:
                if frame_count < 8:
                    score += 15
                else:
                    score += 10
                frame_count += 1
            else:
                score += sum(rolls)
                frame_count += 1
    return score