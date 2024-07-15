def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if frame == 'X': 
            if i < 9: 
                score += 10 + sum(map(int, frames.split("/")[i+1].split('+')[0]))
            else: 
                score += 25
        elif frame == '//':
            continue
        elif len(frame) > 1 and int(frame[0]) + int(frame[-1]) == 10:
            if i < 9: 
                score += 10 + sum(map(int, frames.split("/")[i+1].split('+')[0]))
            else: 
                score += 20
        else:
            score += sum(map(int, frame))
    return score