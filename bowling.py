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
            left_pin = 0
            for i in range(1,3):
                if index+i < len(frames) and frames[index+i].isdigit():
                    left_pin = int(frames[index+i-1])
                    break
            right_pin = 10 - left_pin
            if frames[index+1] == 'X':
                score += 10 + 30
                index += 2
            elif frames[index+1] in '/-':
                score += 10 + right_pin
                index += 2
            else:
                score += left_pin + right_pin
                index += 2
    return score