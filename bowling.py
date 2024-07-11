```
def bowling_score(frames):
    score = 0
    frame = 1
    for char in frames:
        if char.isdigit():
            strike = False
            spare = False
            if len(str(frame)) == 2 and str(frame)[0] == 'X':
                strike = True
            elif len(str(frame)) == 2 and str(frame)[0] != 'X':
                score += int(char) + 10
            else:
                if frame % 2 != 0:
                    score += int(char)
                if char == 'X' or (frame % 2 == 0 and char.isdigit()):
                    strike = True
                elif int(char) + 1 == 10:
                    spare = True
            frame += 1
        else:
            if char == '/':
                score += 10 - int(frames[frames.index(char) - 1])
                frame -= 1
    for i in range(frame, 11):
        if strike and i == 10:
            score += 10 + 2 * (10 - sum(map(int, frames[i-9:i])))
        elif spare and i == 10:
            score += 10 + 10 - int(frames[i-1])
        elif frame > 10:
            break
    return score