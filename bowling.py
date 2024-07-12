```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + (10 - (i//2)) * 10
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