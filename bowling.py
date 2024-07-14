```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            if len(frames) - frames.index(char) < 2:
                strike = True
            elif frames[frames.index(char)+1].isdigit() and frames[frames.index(char)+2].isdigit():
                spare = True
            if strike:
                score += 10 + (10 * int(char))
                frame += 1
            elif spare:
                score += 10 + int(char)
                frame += 1
            else:
                score += int(char) + 10
                frame += 1
        elif char == 'X':
            score += 10
            frame += 1
        elif char == '/':
            score += 10 - int(frames[frames.index(char)-1])
            frame += 1
    return score