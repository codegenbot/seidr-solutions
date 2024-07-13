```
def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 30
            index += 1
        elif frames[index] in ['/']:
            left_pins = int(frames[index - 1])
            right_pins = int(frames[index][1])
            frame_score = left_pins + right_pins
            if left_pins == 10:
                score += 10 + (30 - left_pins)
            elif right_pins == 10:
                score += 10 + left_pins
            index += 2
        else:
            left_pin = int(frames[index][0])
            right_pin = int(frames[index][1])
            frame_score = left_pin + right_pin
            if left_pin == 'X':
                if right_pin in ['X', '/']:
                    score += 30 - left_pin
                else:
                    score += 10 + (30 - left_pin)
            elif right_pin == 'X':
                score -= left_pin
            elif right_pin == '/':
                score += left_pin + 10
            index += 2
    return score