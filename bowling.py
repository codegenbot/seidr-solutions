```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_number < 10:
                score += 10 + int(frames[i+2].split('/')[0])
            else:
                score += 10 + int(frames[i+1].split('/')[0])
        elif '/' in frames[i:i+2]:
            frame = list(map(int, frames[i:i+2].split('/')))
            if sum(frame) == 10:
                score += 10
            else:
                score += sum(frame)
        else:
            score += int(frames[i]) + int(frames[i+1])
        frame_number += 1
    return score