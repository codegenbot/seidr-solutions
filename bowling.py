```
def bowling_score(s):
    score = 0
    roll = 0
    frames = s.split('/')
    for i in range(len(frames)):
        if frames[i].isdigit():
            frame = int(frames[i])
            if frame == 10:
                score += 10 + (roll // 2) * 10
                roll = 0
            else:
                score += frame + (roll % 10)
                roll = 0
        elif frames[i] == 'X':
            score += 10 + (roll // 2) * 10
            roll = 0
        else:
            score += max(1, min(frame, 10 - (roll % 10)))
            roll = 0 if frame > 0 else 10 - frame
    return score