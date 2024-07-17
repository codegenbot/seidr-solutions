```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i*2] == 'X':
            score += 30 + (10 - int(frames[i*2+1].split('/')[0])) * 10
        elif frames[i*2] == '/':
            score += 10 + int(frames[i*2+1].split('/')[0])
        else:
            strike = False
            if frames[i*2] == 'X' and i < 9:
                strike = True
            if strike:
                frame_score = 10 + int(frames[(i+1)*2].split('/')[0]) + int(frames[(i+2)*2].split('/')[0])
            else:
                frame_score = int(frames[i*2] + frames[i*2+1].split('/')[0])
            score += frame_score
    return score