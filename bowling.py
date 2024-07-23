```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i] == 'X':
            score += 10
            if frame < 10:
                if i + 2 < len(frames) and frames[i + 1] == 'X' and frames[i + 2] == 'X':
                    score += 30
                elif i + 3 < len(frames):
                    spare = sum(int(x) for x in frames[(i + 1):(i + 2)].lstrip('/').replace('-', '')) * (frame != 10)
                    score += spare
                frame += 1
        elif frames[i] in '1234567890/':
            if frames[i] == '/':
                try:
                    score += sum(int(x) for x in frames[(i + 1):].lstrip('/').replace('-', '')) * (frame != 10)
                except ValueError:
                    score += sum(int(x) for x in frames[(i + 1):].lstrip('/').replace('-', ''))
            else:
                try:
                    score += int(frames[i]) + sum(int(x) for x in frames[(i + 1)].lstrip('/').replace('-', '')) * (frame != 10)
                except ValueError:
                    score += int(frames[i])
        frame += 1
    return score