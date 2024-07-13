```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for char in frames:
        if char == 'X':
            score += 10
            if frame_num < 10:
                next_char = frames[frames.index(char) + 1]
                if next_char == '/':
                    score += int(frames[frames.index(char) + 2])
                else:
                    score += 10
        elif char == '/':
            first_roll = int(frames[frames.index(char) - 1])
            second_roll = int(char.split('/')[1])
            if first_roll + second_roll == 10:
                score += 10
            else:
                score += first_roll + second_roll
        else:
            score += int(char)
        frame_num += 1
    return score