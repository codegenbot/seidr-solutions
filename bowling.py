```Python
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('-')):
        if len(frame) == 2:
            if frame[0] == 'X':
                score += 30
                if i < 7 and i+1 < len(frames.split('-')):
                    score += int(list('X-' + frames.split('-')[i+1])[3])
                elif i+1 == len(frames.split('-')) or list('X-' + frames.split('-')[i+1])[2] != 'X':
                    if len(frames.split('-')[i+1]) > 1 and list('X-' + frames.split('-')[i+1])[1] == '/':
                        score += int(list('X-' + frames.split('-')[i+1])[3])
            elif frame[1] == '/':
                score += 10
                if i < 8:
                    score += (10 - int(frame[0]))
        elif len(frame) == 1:
            score += int(frame)
    return score

print(bowling_score("8-324333X518-3463X83"))