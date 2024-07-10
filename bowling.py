Here is the solution:

def bowling_game(s):
    score = 0
    frame = 1
    while frame <= 10:
        if '/' in s[1:3]:
            first, second = map(int, re.match('(\d+)/(\d+)', s[:3]).groups())
            if first == 10:
                score += 10 + next(int(x) for x in s[4:])
                frame += 1
            elif second == 10:
                score += 10 + next(int(x) for x in s[3:])
                frame += 1
            else:
                score += first + second
                frame += 1
        else:
            if s[:2] == 'X':
                score += 10
                frame += 1
            elif int(s[:1]) < 10:
                score += int(s[:1])
                frame += 1
            else:
                score += int(s[:2])
                frame += 1
        s = s[3:]
    return score