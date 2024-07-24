```
def bowling_score(s):
    score = 0
    frame = 1
    while s and frame <= 10:
        if s[0] == 'X':
            if len(s) >= 2 and s[1].isdigit():
                score += 10 + int(s[1])
            else:
                score += 10
            s = s[2:]
            frame += 1
        elif '/' in s[:2]:
            left, right = map(int, re.match(r'(\d+)/(\d+)', s[:3]).groups())
            if left == 10:
                score += 10 + right
                s = s[3:]
                frame += 1
            elif right == 0 or left + right >= 10:
                score += left + right
                s = s[3:]
                frame += 1
            else:
                score += 10
                s = s[2:]
                frame += 1
        else:
            left, right = map(int, s[:2])
            if left == 10 or left + right >= 10:
                score += left + right
                s = s[2:]
                frame += 1
            else:
                score += left
                s = s[1:]
                for i in range(9 - frame):
                    s = s.replace('0', '', 1)
                if not s or s[0] == 'X':
                    score += right
                    s = s[1:]
                    frame += 1
                else:
                    right = int(s[0])
                    score += left + right
                    s = s[1:]
    return score