```
def bowling_score(frames):
    score = 0
    for i in range(10):
        if frames[i].isdigit():
            strikes = 1
            while i < 9 and frames[i].isdigit() and frames[i+1].isdigit():
                i += 1
                strikes += 1
            if strikes == 3:
                score += 30
            else:
                score += int(frames[i]) * (10-strikes) + 10*strikes
        elif frames[i] == 'X':
            score += 10 + 10 + 10
        else:
            if frames[i].isdigit():
                first = int(frames[i])
                if i < 9 and frames[i+1].isdigit():
                    second = int(frames[i+1])
                    score += first + second
                else:
                    score += first
    return score