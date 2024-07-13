```python
def bowling_score(frames):
    score = 0
    index = 0
    while index < len(frames):
        if frames[index] == 'X':
            score += 30
            index += 1
        elif frames[index] == '/':
            frame_score = 10 + int(frames[index - 1])
            if index + 1 < len(frames) and frames[index+1].isdigit():
                frame_score += int(frames[index+1])
            score += frame_score
            index += 2
        else:
            if frames[index] == 'X' or frames[index:index+2].endswith('X'):
                score += 30
                index += 1
            elif frames[index] == '/':
                frame_score = 10 + int(frames[index - 1])
                score += frame_score
                index += 2
            else:
                roll1 = int(frames[index])
                roll2 = int(frames[index+1])
                if roll1 + roll2 == 10:
                    score += 10
                else:
                    score += roll1 + roll2
                index += 2
    return score