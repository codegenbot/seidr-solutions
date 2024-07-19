```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame == 10:
                break
            frame += 1
        elif char == '/':
            strike_frame = int(frames[:frames.index('/')].split('/')[0])
            next_roll = int(frames[frames.index('/') + 2])
            score += 10 + strike_frame + next_roll
            frame += 2
    return score