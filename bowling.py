```
def bowling_score(frames):
    score = 0
    for i in range(len(frames)//2):
        if '/' in frames[2*i:2*i+2]:
            frame = list(map(int, frames[2*i:2*i+2].split('/')))
            if sum(frame) == 10:
                if len(frames[2*i:2*i+3]) > 2:
                    score += 10 + int(frames[2*i+2])
                else:
                    score += 10
            else:
                score += sum(frame)
        elif frames[2*i] == 'X':
            if i < 8 and (frames[2*i+1] == 'X' or frames[2*i+1] in '12'):
                score += 20
            elif i == 9 and frames[2*i+1] == 'X':
                score += 10 + int(frames[4*i])
            else:
                score += 10
        else:
            score += int(frames[2*i]) + int(frames[2*i+1])
    return score