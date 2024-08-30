Here is the Python solution:

def bowling_score(s):
    score = 0
    frame = 1
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1].isdigit():
                score += int(s[i:i+2])
            else:
                score += int(s[i])
                if s[i+1] == 'X':
                    score += 10 + (10 - frame)
                elif s[i+1] == '/':
                    score += 10
        elif s[i] == 'X':
            score += 10
            frame += 1
        elif s[i] == '/':
            score += 10
    return score