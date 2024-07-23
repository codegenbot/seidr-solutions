```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            if frame < 10 and int(char) < 10:
                score += int(char)
            elif frame < 10 and int(char) == 10:
                score += int(char)
                frame += 1
            else:
                first_roll = int(char)
                if frames[frames.index(str(char))+1:frames.index(str(char))+2].isdigit():
                    second_roll = int(frames[frames.index(str(char))+1:frames.index(str(char))+2])
                    if first_roll + second_roll == 10:
                        score += 10
                    else:
                        score += first_roll + second_roll
                elif frames[frames.index(str(char))+1:].replace('/', '')[0].isdigit():
                    second_roll = int(frames[frames.index(str(char))+1:].replace('/', '')[:1])
                    if first_roll + second_roll == 10:
                        score += 10
                    else:
                        score += first_roll + second_roll
                frame += 1
        elif char == '/':
            if int(frames[frames.index(str(char))-1:frames.index(str(char))]) < 10:
                score += 10 - (10 - int(frames[frames.index(str(char))-1:frames.index(str(char))]))
    return score