def bowling_score(s):
    score = 0
    roll = 0
    for frame in s.split('/'):
        if len(frame) == 1:
            score += 10
        elif frame[0] != 'X':
            first_roll = int(frame[0])
            second_roll = int(frame[1]) if len(frame) > 1 else 10 - first_roll
            score += first_roll + second_roll
        else:
            roll += 1
            if roll < 9 and s[s.index('X') + 2] == 'X':
                score += 30
            else:
                score += 10
    return score