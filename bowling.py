def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i]:
            left_pins, right_pins = map(int, re.split("/", frames[i]))
            if left_pins == 0:
                score += right_pins + (10 - i)
            elif right_pins == 0:
                score += left_pins + (10 - i)
            else:
                score += min(left_pins, right_pins) + (10 - i)
        else:
            score += int(frames[i])
    return score