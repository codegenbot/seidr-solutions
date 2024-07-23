```
def parse_frame(frame):
    if frame == 'X':
        return 10
    elif '/' in frame:
        parts = frame.split('/')
        return int(parts[0]) + int(parts[1])
    else:
        return sum(int(x) for x in frame)

def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += parse_frame('X')
            i += 1
            if i < len(frames) - 1 and (frames[i:i+2].replace('-', '/') in ['10/', '11/']):
                score += parse_frame(frames[i:i+2].replace('-', '/'))
                i += 1
        elif '/' in frames[i]:
            score += parse_frame(frames[i])
            i += 2
        else:
            score += parse_frame(frames[i])
            i += 1
    return score