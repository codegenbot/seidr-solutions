def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 30
            index += 1
        elif frames[index] == '/':
            score += 10 + int(frames[index - 1])
            index += 2
        else:
            left_pin = int(frames[index])
            right_pin = int(frames[index+1])
            if right_pin == 'X':
                frame_score = 10 + 30 - left_pin
            elif (frames[index:index+2] == 'X-'):
                frame_score = 10 + 20 - left_pin
            else:
                frame_score = left_pin + int(right_pin)
            score += frame_score
            index += 2
    return score