def bowling_score(bowls):
    score = 0
    frames = bowls.split('-')
    for frame in frames:
        if 'X' in frame: # Strike
            score += 10
            if frame == 'XXX':
                score += 10
            elif frame[1] == 'X':
                score += 10
            else:
                score += int(frame[1])
                if frame[2] == '/':
                    score += 10 - int(frame[1])
                else:
                    score += int(frame[2])
        elif '/' in frame: # Spare
            score += 10
            score += int(frame[0])
        else: # Normal frame
            score += int(frame[0])
            score += int(frame[1])
    return score