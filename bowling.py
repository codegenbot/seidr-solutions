```
def bowling_score(s):
    score = 0
    frame = 0
    for char in s:
        if char.isdigit():
            if len(char) == 1:
                score += int(char)
            elif len(char) == 2:
                score += 10
                frame += 1
        else:
            if char == '/':
                score += 10 - int(s[s.index(char)-1])
                frame += 1
    return score