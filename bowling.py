```
def bowling_score(s):
    score = 0
    frame = 1
    for i in range(len(s)):
        if s[i] == 'X':
            score += 30
            frame -= 1
        elif s[i] == '/':
            prev_pin, curr_pin = int(s[i-2]), int(s[i-1])
            if prev_pin + curr_pin == 10:
                score += 10 + 10 - (frame < 5)
            else:
                score += 10
            frame -= 1
        elif s[i].isdigit():
            pin = int(s[i])
            if frame == 9 and pin in [7,8]:
                prev_pin = int(s[i-1])
                if prev_pin + pin == 10:
                    score += 10 + prev_pin - (frame < 5)
                else:
                    score += 10
                frame -= 1
            elif frame == 10 and s[i-2] in ['X', '/']:
                score += 10
            else:
                score += pin - (frame < 5)
    return score