def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 10
            i += 1
            if i < len(frames) and (frames[i] == '/' or frames[i] == 'X'):
                score += int(frames[i+1].split('/')[0])
                i += 2
        elif '/' in frames[i:i+2]:
            frame = list(map(int, frames[i:i+2].split('/')))
            if sum(frame) == 10:
                score += 10
            else:
                score += sum(frame)
            i += 2
        else:
            score += int(frames[i])
            i += 1