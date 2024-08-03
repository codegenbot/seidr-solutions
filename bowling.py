```
def bowling_score(s):
    score = 0
    frame = []
    for i in range(len(s)):
        if s[i] == 'X':
            frame.append(10)
        elif s[i].isdigit():
            frame.append(int(s[i]))
        else:
            if len(frame) > 1 and sum(frame[-2:]) >= 10:
                score += 10
                frame.pop()
            else:
                score += sum(frame)
                frame = []
    return score