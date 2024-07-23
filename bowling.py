```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            score += int(char)
            if frame < 10:
                if int(char) == 10:
                    score += 10
                    frame += 1
                elif int(char) != 1:
                    score += int(char)
                    frame += 1
                else:
                    first_roll = int(char)
                    second_roll = frames[frames.index(char)+1:frames.index(char)+2].isdigit() and int(frames[frames.index(char)+1:frames.index(char)+2]) or 0
                    if first_roll + second_roll == 10:
                        score += 10
                        frame += 1
                    else:
                        score += first_roll + second_roll
                        frame += 1
        elif char == '/':
            if int(frames[frames.index(char)-1:frames.index(char)]) < 10:
                score += 10 - (10 - int(frames[frames.index(char)-1:frames.index(char)]))
                frame += 1
            else:
                score += 10
                frame += 1
    return score