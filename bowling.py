```
def bowling_score(s):
    score = 0
    frames = s.split('/')
    for i in range(len(frames)):
        if frames[i].isdigit():
            if int(frames[i]) == 10:
                score += 10 + (10 if i < 9 and frames[i+1] == 'X' else 0)
            elif len(frames) - i > 1 and frames[i+1].isdigit() and sum(map(int, frames[i:i+2])) == 10:
                score += 10
            else:
                score += int(frames[i])
        elif frames[i] == 'X':
            if i < 9:
                score += 10 + int(frames[i+1])
            else:
                score += 10
        elif len(frames) - i > 1 and frames[i+1].isdigit() and int(frames[i]) + int(frames[i+1]) == 10:
            score += 10
    return score