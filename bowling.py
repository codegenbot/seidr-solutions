```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and (frames[i].replace('-', '/') in ['20/', '30/']):
                if frames[i].replace('-', '/') == '20/':
                    score += 20
                else:
                    score += 30
                i += 1
        elif '/' in frames[i]:
            parts = frames[i].split('/')
            score += int(parts[0]) + int(parts[1])
            i += 2
        else:
            score += sum(int(x) for x in frames[i])
            i += 1
    return score