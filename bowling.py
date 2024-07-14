```
def bowling_game(s):
    score = 0
    frame = 1
    while frame <= 10:
        if '/' in s:
            s = s.split('/')
            strike = int(s[0])
            spare = int(s[1])
            score += strike + spare
            s = ''
            frame += 1
        elif len(s) > 0 and (s[0] == 'X' or str(int(s[0])) != s[0]):
            if len(s) > 1:
                s = s[1:]
            else:
                score += 10
                frame += 1
        else:
            if len(s) >= 2:
                s = s[:-1]
                score += int(s[-1])
            frame += 1
    return score