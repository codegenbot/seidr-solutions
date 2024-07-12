```
def bowling_score(frames):
    score = 0
    frames = list(frames)
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and frames[i] in ['/']:
                frames[i] = ''
            else:
                roll = int(frames[i])
                score += roll
                i += 1
        elif frames[i] == '/':
            roll = list(map(int, frames[i+1].split()))
            score += sum(roll)
            i += 2
        else:
            frame = list(map(int, frames[i:i+2]))
            if sum(frame) == 10:
                score += sum(frame)
                i += 2
            elif frame[0] + frame[1] < 10:
                score += 10
                i += 2
            else:
                score += sum(frame)
                i += 2
    return score

print(bowling_score('44351--661X8-2517X63'))