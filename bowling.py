```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i].isdigit():
            strike = False
            while len(frames[i]) < 3:
                frames[i] += 'X'
                strike = True
            if strike:
                score += 30
            else:
                score += int(frames[i])
        elif frames[i][0] == '/':
            frame_score = list(map(int, frames[i].replace('/', '')))
            score += sum(frame_score)
        else:
            split = frames[i].index('/')
            left, right = map(int, [frames[i][:split], frames[i][split+1:]])
            if left + right > 10:
                score += 10
            else:
                score += left + right
    return score