```
def bowling_game(s):
    score = 0
    roll = 0
    for i in range(1, 11):
        if '/' in s[i-1:i+2]:
            n1, n2 = map(int, re.match('(\d+)/', s[i-1:i+2]).group(1))
            if n1 == 10:
                score += 10 + (n2 if i < 10 else 0)
                roll += 2
            elif n2 >= n1:
                score += n1 + n2
                roll = min(roll + 2, 3) if i < 10 else 0
            else:
                score += n1
                roll += 1
        else:
            score += int(s[i-1])
            roll += 1
    return score