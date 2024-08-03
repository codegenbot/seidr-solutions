```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for char in frames:
        if char.isdigit():
            if len(char) == 2 and char[0] == 'X':
                score += 30
                frame_count += 1
            else:
                score += int(char)
                frame_count += 1
        elif char == '/':
            if frame_count < 10:
                score += 10 - (int(frames[:frames.index('/')]) - 10)
                frame_count += 1
    return score