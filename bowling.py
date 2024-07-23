```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if frame == 10:
                if int(char) == 10:
                    score += 10
                    continue
            score += int(char)
            if frame < 10:
                if int(char) < 10 and (frame + 1 > 2 or (int(char) == 10)):
                    frame += 1
        elif char == '/':
            if score + 10 <= 10:
                score += 10
            else:
                score += 10 - ((-score)//10)*10 + 10
            frame += 1
    return score