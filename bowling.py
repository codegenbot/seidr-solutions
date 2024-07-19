def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame == 10:
                break
            frame += 1
        elif char == '/':
            first_roll = int(frames[:frames.index(char)].split('/')[-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 2
    return score