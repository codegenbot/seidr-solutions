```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            if frame < 10:
                score += int(frames[(i + 1):].index('X', i+1) - i - 1) * 10 if 'X' in frames[(i + 1):] else sum(int(x) for x in frames[(i + 1):(i + 3)].lstrip('/').replace('-', '')) * (frame != 10)
            frame += 1
        elif frames[i] in '1234567890/':
            if frames[i] == '/':
                score += sum(int(x) for x in frames[(i + 1):].lstrip('/').replace('-', '')) * (frame != 10)
            else:
                if int(frames[i]) + sum(int(x) for x in frames[(i+1)].lstrip('/').replace('-', '')) > 10:
                    score += 10
                else:
                    score += int(frames[i]) + sum(int(x) for x in frames[(i+1)].lstrip('/').replace('-', ''))
            frame += 1
    return score