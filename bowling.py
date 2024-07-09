```
def bowling_score(frames):
    score = 0
    roll = list(map(int, frames))
    for i in range(0, 10):
        if roll[i] == 'X':
            score += 30
            if i < 9:
                if roll[i+1] == '/':
                    score += roll[i+2]
                else:
                    score += sum(roll[i+1:i+3])
        elif '/' in str(roll[i]):
            first, second = map(int, str(roll[i]).split('/'))
            score += first + second
        else:
            score += sum(roll[i:i+2])
    return score