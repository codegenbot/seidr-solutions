```
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
            if index+1 < len(frames) and frames[index+1] == 'X':
                frame_score = 10 + 30
            elif index+1 < len(frames) and frames[index:index+2] == 'X-':
                frame_score = 10 + 20
            else:
                right_pin = int(frames[index+1])
                if '-' in frames[index:]: 
                    left_pin, right_pin = map(int, frames[index-1:index].split('-'))
                frame_score = left_pin + right_pin
            score += frame_score
        index += 1
    return score