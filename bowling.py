```
def bowling_score(frames):
    score = 0
    i = j = 0
    while i < len(frames):
        if frames[i] != '/':
            score += int(frames[i])
            i += 1
        else:
            rolls = list(map(int, frames[i].split('/')))
            if i+2 < len(frames) and frames[i+1].endswith('/'):
                rolls.append(int(frames[i+2].split('/')[0]))
            score += sum(rolls)
            i += 3
    return score