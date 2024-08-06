```
def bowling_score(frames):
    score = 0
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif 'X' in frame:
            if len(frame) > 2:
                score += 20 + int(frame.replace('X', '').replace('/', ''))*2
            else:
                score += 30
        else:
            strike = False
            if frame[0] == 'X':
                strike = True
            elif frame[0].isdigit():
                bonus = int(frame[0])
            else:
                continue
            for char in frame[1:]:
                if char.isdigit():
                    bonus += int(char)
                else:
                    break
            score += 10 + bonus
            if strike:
                score += 10 + int(frames.split('/')[frames.index(frame)+1].replace('X', '').replace('/', ''))
    return score