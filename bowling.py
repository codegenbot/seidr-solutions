Here is the solution:

def bowling_score(bowling):
    score = 0
    frames = [int(x) for x in re.split('([-X])', bowling) if x.isdigit()]
    for i in range(0, len(frames), 2):
        if frames[i] == 10:
            score += 10 + (frames[i+1] if i+1 < len(frames) and frames[i+1].isdigit() else 10)
        elif sum(frames[i:i+2]) == 10:
            score += sum(frames[i:i+2])
            if i+2 < len(frames):
                score += frames[i+2]
        else:
            score += frames[i] + frames[i+1]
    return score