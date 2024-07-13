def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 30
        elif frames[index] == '/':
            score += 10 + int(frames[index - 1])
            index += 2
        else:
            left_pin = int(frames[index])
            right_pin = int(frames[index+1])
            frame_score = left_pin + right_pin
            if left_pin == 'X' and right_pin in ['X', '/']:
                frame_score = 10 + (30 - left_pin)
            elif right_pin == 'X':
                frame_score -= left_pin
            score += frame_score
            index += 2
    return score