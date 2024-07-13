```
def bowling_score(frames):
    score = 0
    roll = 0
    frame_index = 1
    for char in frames:
        if char == 'X' or char == 'x':
            score += 10
            if roll < 2:
                if roll == 0 and frame_index != 10:
                    score += int(frames.split(' ')[frame_index].split('/')[0])
                roll += 1
        elif char == '/':
            first_roll = int(frames.split(' ')[frame_index-1].split('/')[0])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            if frame_index != 10:
                roll = 0
            frame_index += 1
        else:
            score += int(char)
    return score