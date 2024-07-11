```
def bowling_score(frames):
    score = 0
    current_frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10 + get_bonus(frames[i+1:i+3])
            current_frame += 1
        elif frames[i] == '/':
            parts = frames[i-1:i+1].split('/')
            score += 10 - int(parts[0]) + get_bonus(frames[i+1:])
            current_frame += 1
        else:
            parts = frames[i:i+2].split('/')
            score += sum(map(int, parts))
            if current_frame == 10:
                return score
    return score

def get_bonus(frames):
    if 'X' in frames or '/' in frames:
        return 10 + int(frames[0])
    else:
        return sum(map(int, frames))