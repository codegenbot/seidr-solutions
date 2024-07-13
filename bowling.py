```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            score += int(char)
            if len(frames) - frame > 1 and frames[frame:][0].isdigit() and frames[frame:][1].isdigit():
                if int(frames[frame:][0]) + int(frames[frame:][1]) == 10:
                    spare = True
                else:
                    strike = True
            frame += 1
        elif char == 'X':
            score += 10
            strike = True
        elif char == '/':
            strike = False
    if strike and len(frames) - frame > 0:
        score += 10 + int(frames[frame])
    elif spare:
        score += 10 + int(frames[frame])
    return score