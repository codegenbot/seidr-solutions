```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            left, right = map(int, frames[i].split('/'))
            if left == 10:
                score += 10 + sum(frames[j+1:i+3].count('X')*2 for j in range(i))
            else:
                score += left + right
        elif frames[i] == 'X':
            score += 10 + sum(frames[j+1:].count('X')*2 for j in range(i))
        else:
            score += int(frames[i])
    return score