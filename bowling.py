```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i*2:i*2+2]:
            frame = list(map(int, frames[i*2:i*2+2].split('/')))
            if sum(frame) == 10:
                score += 10
            else:
                score += sum(frame)
        elif 'X' == frames[i*2]:
            score += 10
        elif frames[i*2] == '2':
            if i < 9 and '/' in frames[(i+1)*2:(i+1)*2+2]:
                frame = list(map(int, frames[(i+1)*2:(i+1)*2+2].split('/')))
                score += int(frames[i*2]) + frame[0]
            else:
                score += 2
        elif '1' == frames[i*2] and '/' in frames[i*2+1:i*2+3]:
            if i < 9 and 'X' != frames[(i+1)*2]:
                score += int(frames[i*2]) + 10 - int(frames[(i+1)*2])
            else:
                score += 1
        else:
            score += int(frames[i*2]) + (0 if i < 9 and 'X' == frames[(i+1)*2] else int(frames[i*2+1]))
    return score