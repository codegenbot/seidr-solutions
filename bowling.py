Here is the solution to the problem:

def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            if int(frame) != 10:
                score += min(10, int(frame))
            else:
                score += 10
        elif len(frame) == 2:
            total_pins = int(frame[0]) + int(frame[1])
            if total_pins < 10:
                score += total_pins
            else:
                score += 10
                roll += 1
        elif len(frame) == 3 and str(roll).zfill(2):
            total_pins = int(frame[0]) + int(frame[1]) + int(frame[2])
            if total_pins < 10:
                score += total_pins
            else:
                score += 10
    return score