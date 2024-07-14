```
def bowling_score(s):
    score = 0
    frame = 1
    for char in s + 'X':
        if char.isdigit():
            if len(char) == 2:
                strike = int(char[0]) * 10 + int(char[1])
                score += strike
                if frame < 10:
                    score += 10
                frame += 1
            else:
                spare = int(char)
                score += spare
                if frame < 9 and char != '5':
                    score += 10 - int(s[s.index('X')-1])
                frame += 1
        elif char == 'X':
            score += 10
            frame += 1
    return score