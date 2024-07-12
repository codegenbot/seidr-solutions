```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10
            if i < 8 and frames[i+1] == 'X':
                score += 10
            elif i < 18 and frames[i+1].count('/') == 1:
                roll = list(map(int, frames[i+2:i+4].split()))
                score += sum(roll)
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