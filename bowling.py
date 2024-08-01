```
def bowling_score(s):
    frames = [list(map(int, frame.split('/'))) if '/' in frame else [int(frame)] for frame in s.split()]
    total_score = 0
    i = j = 0
    while i < len(frames):
        if len(frames[i]) == 1:
            total_score += frames[i][0]
            i += 1
        elif len(frames[i]) == 2:
            if frames[i][0] + frames[i][1] == 10:
                if i < len(frames) - 1 and frames[i+1][0] == 10: 
                    total_score += 20
                    i += 1
                else:
                    total_score += 10 + frames[i][j+1]
                    j += 1
            else:
                total_score += sum(frames[i])
                i += 1
        elif len(frames[i]) == 3 and frames[i][0] + frames[i][1] + frames[i][2] == 10:
            if i < len(frames) - 1 and frames[i+1][0] == 10: 
                total_score += 30
                i += 2
            else:
                total_score += sum(frames[i])
                i += 1
    return total_score