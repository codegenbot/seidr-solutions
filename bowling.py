```
def bowling_score(frames):
    score = 0
    rolls = [int(frame) if frame.isdigit() else 10 if frame == 'X' else int(frame[:-1]) for frame in frames.split('/')]
    for i in range(0, 10*2, 2):
        if rolls[i] == 10:
            score += 10 + (10 - rolls[i+1] if i+2 < 20 and rolls[i+1].isdigit() else 10)
        elif rolls[i] + rolls[i+1] >= 10:
            score += 10
        else:
            score += rolls[i] + rolls[i+1]
    return score