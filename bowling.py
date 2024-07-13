def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 10
            if index + 1 >= len(frames) or frames[index + 1] in ['/']:
                continue
            left_pin = int(frames[index + 1].split('/')[0])
            score += left_pin
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
            if left_pin == 'X':
                score += 10 + (int(frames[index + 1].split('/')[0]) if index + 1 < len(frames) and frames[index + 1] in ['/'] else 0)
                index += 2
            elif right_pin == '/':
                frame_score = int(left_pin) + 10
                score += frame_score
            else:
                frame_score = left_pin + right_pin
                score += frame_score
            index += 2
    return score