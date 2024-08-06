```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            left, right = map(int, re.split('/', frames[i]))
            if left == 10:
                score += 10 + sum(map(int, frames[i+1:i+2])) 
            else: 
                score += left + right
        else:
            score += int(frames[i])
    return score