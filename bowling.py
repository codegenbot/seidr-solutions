```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split()):
        if len(frame) == 2 and frame[0] == 'X' or frame[0].upper() == 'X':
            score += 10
            if i < 9:
                score += int(frames.split()[i+1].split('/')[0]) if '/' in frames.split()[i+1] else 10
        elif len(frame) > 1 and frame[0] == '/':
            first_roll = int(frame[1:])
            score += 10 - first_roll + first_roll
        else:
            score += sum(int(char) for char in frame)
    return score