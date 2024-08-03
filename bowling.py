```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(1, 11):
        if s[i-1] == 'X':
            score += 10 + (10 - i) * 10
            roll += 2
        elif s[i-1].isdigit():
            strike_frame = [int(s[j]) for j in range(i-1, min(3*i, len(s)))]
            if len(strike_frame) == 2:
                score += sum(strike_frame)
                roll += 2
            else:
                score += sum(strike_frame[:1])
                score += sum(strike_frame[1:])
                roll += 3
        else:
            frame = [int(s[j]) for j in range(i-1, i+1)]
            if len(frame) == 1:
                score += frame[0]
                roll += 1
            elif len(frame) == 2:
                if sum(frame) < 10:
                    score += sum(frame)
                    roll += 2
                else:
                    score += 10
                    roll = 2
    return score