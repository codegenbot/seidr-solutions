```
def bowling_score(s):
    score = 0
    frame = 1
    for char in s:
        if char.isdigit():
            score += int(char)
            if frame < 10 and (char == 'X' or len(s) - s.index(char) <= 2):
                score -= int(char)
                continue
        elif char == 'X':
            score += 10
        elif char == '/':
            score += 10 - int(s[s.index(char)-1])
    return score