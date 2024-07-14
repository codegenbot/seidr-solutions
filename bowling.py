Here is the solution:

def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2 if i < 9 else 10
        elif len(frame) == 2:
            first_roll = int(frame[0])
            second_roll = int(frame[1])
            score += first_roll + second_roll
            if first_roll == 10: 
                score += next(frames.split('/')[i+1].split('-')[0]).isdigit() and int(next(frames.split('/')[i+1].split('-')[0])) < 10 or next(frames.split('/')[i+1].split('-')[0]) == 'X'
            elif second_roll == 10:
                score += next(frames.split('/')[i+1].split('-')[0]).isdigit() and int(next(frames.split('/')[i+1].split('-')[0])) < 10 or next(frames.split('/')[i+1].split('-')[0]) == 'X' 
        else: 
            score += 10 + (int(frame[0]) - 10) * 2 if i < 9 else 10
    return score