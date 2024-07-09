```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i] == 'X':
            score += 10 + (10 if frame < 9 and s[i+2].isdigit() else 0)
            frame += 1
        elif s[i] == '/':
            ones = int(s[i-1])
            twos = 10 - ones
            score += ones * 10 + twos
            frame += 1
        else:
            ones = int(s[i])
            twos = int(s[i+1])
            if ones + twos == 10:
                score += 10
                frame += 1
            elif ones < 10 and twos < 10:
                score += ones * 10 + twos
                frame += 1
            else:
                score += (ones + twos) * 10 - 20
                frame += 1
    return score