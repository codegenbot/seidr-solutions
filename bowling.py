```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            score += 10 + (10 if frame < 9 and s[i+2].isdigit() else 0)
            frame += 1
        elif s[i] == '/':
            strike = int(s[i-1])
            spare = int(s[i+1]) - 5
            score += strike + spare
            frame += 1
        else:
            strike = int(s[i])
            spare = int(s[i+1])
            if strike + spare >= 10:
                score += 10
            else:
                score += strike + spare
            frame += (strike == 10 or spare == 10)
    return score