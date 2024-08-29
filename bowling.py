def bowling_score(s):
    score = 0
    frame = 1
    while s and frame <= 10:
        if s[0] == 'X':
            score += 10 + (10 if len(s) > 2 and s[1:3] in ['//', '--'] else 0)
            s = s[1:]
        elif s[:2] in ['--', '//']:
            score += 10
            s = s[2:]
        elif s[0] == '/':
            first_roll = int(s[0])
            if len(s) > 1 and s[1] == 'X':
                score += 10 + first_roll
                s = s[2:]
            else:
                score += first_roll + int(s[1])
                s = s[2:]
        else:
            first_roll = int(s[0])
            if len(s) > 1 and s[1] == 'X':
                score += 10 + first_roll
                s = s[2:]
            else:
                score += first_roll + int(s[1])
                s = s[2:]
        frame += (1 if s[0] in ['/X'] else 2)
    return score