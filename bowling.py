def bowling_score(gutter):
    score = 0
    roll = 0
    for frame in gutter:
        if '/' in frame:
            strike = False
            spare = False
            for i, pin in enumerate(frame):
                if pin == 'X':
                    strike = True
                elif pin == '/':
                    spare = True
                else:
                    roll += int(pin)
            if strike:
                score += 10 + (10 - sum(map(int, frame[:-1])))
            elif spare:
                score += 10 + (10 - sum(map(int, frame[:-1]))))
            else:
                score += roll
        else:
            roll = 0
            for i, pin in enumerate(frame):
                roll += int(pin)
            if roll == 10:
                score += 10
            else:
                score += roll
    return score