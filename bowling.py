def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            if index < len(frames) - 1:
                right_pin = int(frames[index + 1])
                if right_pin in ['X', '/']:
                    frame_score = 30
                else:
                    frame_score = 10 + right_pin
                score += frame_score
            else:
                score += 30
        elif frames[index] == '/':
            if index > 0:
                left_pin = int(frames[index - 1])
                frame_score = 10 + left_pin
                score += frame_score
            index += 2
        else:
            left_pin = int(frames[index])
            right_pin = int(frames[index + 1])
            if left_pin == 10 and right_pin in ['X', '/']:
                if right_pin == 'X':
                    frame_score = 20
                else:
                    frame_score = 10
            elif left_pin == 10:
                frame_score = 10 + right_pin
            else:
                frame_score = left_pin + right_pin
            score += frame_score
            index += 2
    return score