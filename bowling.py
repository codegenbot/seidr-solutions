```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char == 'X':
            score += 30
            frame -= 1
        elif char == '/':
            first_roll = int(frames[:frames.index('/')].count('X')) * 10 + 10
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frames = frames[frames.index('/'):]
        else:
            if frame < 10:
                if char == '5':
                    score += 15
                elif int(char) > 0 and int(char) <= 9:
                    score += int(char) * 10
                frame -= 1
    return score