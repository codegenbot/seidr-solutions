```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if frame == 10 and int(char) > 9:
                return "Invalid input"
            score += int(char)
            if frame < 10 and (int(char) == 10 or int(char) + 1 > 10):
                spare = 10 - int(char)
                score -= spare
                frame += 1
        elif char == '/':
            if frame > 10:
                return "Invalid input"
            score += 10
            frame += 1
    while frame < 10:
        if score + 10 > 300:
            break
        if (score % 2) != 0 or frame == 10:
            score += 15
        else:
            score += 10
        frame += 1
    return score