```
def bowling_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            frame_score = int(frames[i-1])
            score += frame_score + 10
        else:
            ones = int(frames[i])
            twos = int(frames[i+1])
            if ones + twos >= 10:
                score += 10 + (ones + twos - 10)
            else:
                score += ones + twos
    return score