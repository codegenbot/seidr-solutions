```
def bowling_score(frames):
    frames = frames.split('/')
    score = 0
    i = 0

    for frame in frames:
        if frame == 'X':
            score += 10
        elif frame == 'XX':
            score += 20
        else:
            total = 0
            for j, char in enumerate(frame):
                if char.isdigit():
                    total += int(char)
                if j == len(frame) - 1 and total < 10:
                    total = 10 - total
            score += total

    return score