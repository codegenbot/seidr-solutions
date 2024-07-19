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
            first_roll = int(frames[frames.index(char) - 1])
            second_roll = int(frames[frames.index(char) + 1])
            score += 10 - first_roll - second_roll
            frame += 1
    for i in range(frame, len(frames)):
        if frames[i].isdigit():
            score += int(frames[i])
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = int(frames[i+1])
            score += 10 - first_roll - second_roll
    return score