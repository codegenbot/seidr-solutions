def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 10
            if index + 1 >= len(frames) or frames[index + 1] in ['/']:
                continue
            score += 10
            index += 2
        elif frames[index] in ['/']:
            left_pins = int(frames[index - 1][0])
            right_pins = int(frames[index][1])
            if left_pins == 10:
                score += 10 + right_pins
            else:
                frame_score = left_pins + right_pins
                score += frame_score
            index += 2
        else:
            left_pin = int(frames[index][0])
            right_pin = int(frames[index][1])
            if left_pin == 'X' and frames[index + 1] in ['/']:
                score += 10 + 10
            elif left_pin == 'X':
                score += 10 + right_pin
            else:
                frame_score = left_pin + right_pin
                score += frame_score
            index += 2
    return score