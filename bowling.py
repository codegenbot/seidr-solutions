```
def parse_frame(frame):
    if frame == 'X':
        return 10
    elif '/' in frame:
        return 1 + int(frame.replace('/', '').replace('-', '')[0])
    else:
        return sum(int(x) for x in frame)

def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += parse_frame('X')
            i += 1
            if i < len(frames) - 1 and frames[i] == 'X':
                score += parse_frame('X')
                i += 1
        elif '/' in frames[i]:
            score += parse_frame(frames[i])
            i += 2
        else:
            score += parse_frame(frames[i])
            i += 1
    return score

print(bowling_score(input().split()))