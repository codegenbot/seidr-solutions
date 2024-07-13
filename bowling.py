def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index:index+2] == "X ":
            score += 30
            index += 2
        elif frames[index:index+1] == "/":
            score += 10 + int(frames[index-1])
            index += 2
        else:
            left_pin = int(frames[index])
            if frames[index+1] == "X":
                right_pin = 10 - left_pin
                frame_score = 10 + 30 - left_pin
            elif frames[index:index+2] == "X-":
                right_pin = 10 - left_pin
                frame_score = 10 + 20 - left_pin
            else:
                right_pin = int(frames[index+1])
                frame_score = left_pin + right_pin
            score += frame_score
            index += 2
    return score