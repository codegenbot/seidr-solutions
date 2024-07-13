```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame < 10:
                if frames[i+1].count('X') == 2:
                    score += 30
                else:
                    score += int(frames[i+1].replace('X', '10')) + 10
            else:
                score += 10
        elif '/' in frames[i:i+2]:
            frame_score = list(map(int, frames[i:i+2].split('/')))
            if sum(frame_score) == 10:
                score += 10
            else:
                score += sum(frame_score)
        else:
            score += int(frames[i]) + (0 if frame < 9 else 0)
        frame += 1
    return score