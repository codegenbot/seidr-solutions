def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 10
            if index + 1 >= len(frames) or frames[index + 1] in ['/']:
                continue
            score += int(frames[index + 1].replace('/'))
            index += 2
        elif frames[index] in ['/']:
            left_pins = int(frames[index - 1][0])
            right_pins = int(frames[index][1])
            if left_pins == 'X':
                if right_pins == '/':
                    score += 10 + 10
                else:
                    score += 10 + (int(right_pins) + int(frames[index + 1].replace('/')))
                index += 2
            elif left_pins == 0:
                frame_score = right_pins
                if index + 1 < len(frames) and frames[index + 1] in ['/']:
                    frame_score += int(frames[index + 1].replace('/'))
                score += frame_score
                index += 2
            else:
                frame_score = left_pins + right_pins
                score += frame_score
                index += 2
        else:
            left_pin = int(frames[index][0])
            right_pin = int(frames[index][1])
            if left_pin == 'X':
                if right_pin == 'X':
                    score += 10 + 10
                elif right_pin in ['/']:
                    score += 10 + (int(right_pin) + int(frames[index + 1].replace('/')))
                else:
                    score += 10 + right_pin
                index += 2
            elif left_pin == 0:
                if right_pin in ['/']:
                    frame_score = right_pin
                    if index + 1 < len(frames) and frames[index + 1] in ['/']:
                        frame_score += int(frames[index + 1].replace('/'))
                    score += frame_score
                else:
                    frame_score = right_pin
                    score += frame_score
                index += 2
            else:
                frame_score = left_pin + right_pin
                score += frame_score
                index += 2
    return score