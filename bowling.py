def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if frame == 10:
                score += int(char)
                break
            score += int(char)
            frame += 1
        elif char == '/':
            first_roll = int(frames[frames.index(char) - 1])
            second_roll = int(frames[frames.index(char) + 1]) if frames[frames.index(char) + 1].isdigit() else 10
            score += 10 - (first_roll + second_roll)
            frame += 1