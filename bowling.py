```
def bowling_game(frames):
    score = 0
    roll1 = 0
    roll2 = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            if roll1 + int(frame) < 10:
                score += roll1 + int(frame)
                roll1 = 0
            else:
                score += 10 + roll1
                roll1 = 0
        elif len(frame) == 2:
            if roll1 + int(frame[0]) + int(frame[1]) < 10:
                score += roll1 + int(frame[0]) + int(frame[1])
                roll1 = 0
            else:
                score += 10 + roll1
                roll1 = 0
        elif len(frame) > 2:
            roll1 = int(frame[0])
            if len(frame) == 4:
                roll2 = int(frame[1] + frame[2])
            else:
                roll1 += int(''.join(filter(str.isdigit, frame[1:])))
            score += roll1
            if roll2 > 0:
                score += roll2
    return score