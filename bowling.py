def bowling_score(frames):
    score = 0
    for i in range(10):
        if '/' in frames[i]:
            left_pins, right_pins = map(int, frames[i].split('/'))
            if left_pins == 0:
                score += 10 + (right_pins if right_pins > 0 else 0)
            elif left_pins + right_pins < 10:
                score += left_pins + right_pins
            else:
                score += 10
        else:
            score += int(frames[i])
    return score