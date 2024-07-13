```python
def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if index + 1 >= len(frames) or (index + 2 >= len(frames) and frames[index] == 'X'):
            # Handle last frame
            if frames[index] == 'X':
                score += 10 + 20
            elif frames[index] == '/':
                score += 10 + int(frames[index - 1])
            else:
                left_pin = int(frames[index])
                if len(frames) - index > 1 and frames[index+1] == 'X':
                    frame_score = 10 + 30
                elif len(frames) - index > 1 and frames[index:index+2] == 'X-':
                    frame_score = 10 + 20
                else:
                    left_pin += int(frames[index+1])
                    frame_score = left_pin
                score += frame_score
            break
        if frames[index] == 'X':
            score += 30
            index += 1
        elif frames[index] == '/':
            score += 10 + int(frames[index - 1])
            index += 2
        else:
            frame_score = 0
            if frames[index] == 'X':
                frame_score = 20 + int(frames[index+1])
                index += 2
            elif frames[index] == '-':
                left_pin = int(frames[index-1])
                right_pin = int(frames[index+1])
                frame_score = left_pin + right_pin
                index += 2
            else:
                left_pin = int(frames[index])
                if len(frames) - index > 1 and frames[index+1] == 'X':
                    frame_score = 10 + 30
                    index += 2
                elif len(frames) - index > 1 and frames[index:index+2] == 'X-':
                    frame_score = 10 + 20
                    index += 2
                else:
                    left_pin += int(frames[index+1])
                    frame_score = left_pin
                    index += 2
            score += frame_score
    return score