```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            strike, spare = map(int, frames[i].split('/'))
            if i < 9:
                score += strike + spare
            else:
                score += strike * 2 + spare
        elif frames[i] == 'X':
            score += 10 + (10 - len(frames[:i].replace('X', ''))) * 1
        else:
            score += int(frames[i])
    return score