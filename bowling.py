```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split('/'):
        if len(frame) > 0 and (frame[0] == 'X' or frame[0].isdigit()):
            strike = True if frame[0] == 'X' else False
            spare = False
            total_pins = 10 if not strike else 0
            for i in range(len(frame)):
                if frame[i].isdigit():
                    total_pins += int(frame[i])
            score += total_pins
            if spare:
                score += 10 - total_pins
        elif len(frame) > 1 and frame[0] == 'X':
            strike = True
            score += 10 + (10 - 2 * int(frame[1]))
        else:
            pins = list(map(int, frame))
            score += sum(pins)
            if sum(pins) < 10:
                score += 10 - sum(pins)
        frame_num += 1
    return score