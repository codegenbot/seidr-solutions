```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame < 10:
                score += 10
                if frames[i+1].isdigit():
                    score += int(frames[i+1])
                else:
                    frame_score = 10 + int(frames[i+2])
                    score += 10 + (frame_score - 10) // 2
            else:
                score += 10
        elif '/' in frames[i:i+2]:
            frame_score = sum(map(int, frames[i:i+2].split('/')))
            if frame < 5 or frame % 2 == 0:
                score += frame_score
            else:
                score += 10 + (frame_score - 10) // 2
            frame += 1
        else:
            score += int(frames[i]) + int(frames[i+1])
            frame += 1
    return score