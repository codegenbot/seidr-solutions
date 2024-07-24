```
def bowling_score(s):
    score = 0
    roll = 0
    for i in range(10):
        if s[i] == 'X':
            score += 30
            roll = 2
        elif s[i].isdigit():
            strike = False
            frame_score = int(s[i])
            if i < 8 and s[i+1].isdigit() and s[i+2].isdigit():
                if int(s[i+1]) + int(s[i+2]) >= 10:
                    roll += 2
                else:
                    roll += 1
            for j in range(roll):
                if j == 0 or (j > 0 and not strike):
                    score += frame_score
                elif strike:
                    score += 10 + frame_score
                strike = False
        else:
            if s[i] == '/':
                strike = True
    return score