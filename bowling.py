```
def bowling_score(s):
    score = 0
    frames = s.replace('/','//').replace('-0', '-').split('-')
    for frame in frames:
        if len(frame) == 2 and frame[1] == 'X':
            score += 10 + int(bowling_score(''.join(frames[frames.index(frame)+1:]))+1)
        elif len(frame) == 3:
            score += 10
        elif frame[0] == 'X':
            score += 10
            if frames.index(frame) < 9:
                score += int(frame[1]) + int(frames[frames.index(frame)+1][0])
        elif '/':
            score += 5 + int(frame[0]) + int(frame[2])
        else:
            score += int(frame[0]) + int(frame[1])
    return score