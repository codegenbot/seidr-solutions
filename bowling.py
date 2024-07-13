```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char == 'X':
            score += 30
            frame += 1
        elif char == '/':
            first_roll = int(frames[:frames.index('/')].count('X')) * 10 + int(frames[frames.index('/')+1:frames.index('/', frames.index('/')+1)].count('X')) * 10
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 1
        else:
            if char == '5':
                score += 5
                frame += 1
            elif int(char) > 0:
                score += int(char)
                frame += 1
    return score