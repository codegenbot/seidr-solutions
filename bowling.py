```
def bowling_score(s):
    frames = [0]*10
    for i in range(0, len(s), 2):
        if s[i].isdigit():
            if s[i+1] == '/':
                total = int(s[i])
                frames[i//2] = max(10, min(int(s[i]), 10))
                frames[i//2 + 1] = 10 - total
            else:
                frames[i//2] += int(s[i])
        else:
            if s[i] == 'X':
                frames[i//2] = 10
                if i < len(s) - 1 and s[i+1].isdigit():
                    frames[i//2 + 1] = 10 - int(s[i+1])
                elif i < len(s) - 2 and s[i+1:i+3].isdigit():
                    frames[i//2 + 1] = 10 - int(s[i+1:i+2]) - int(s[i+2])
            else:
                if i < len(s) - 1 and s[i+1].isdigit():
                    total = int(s[i]) + int(s[i+1])
                    frames[i//2] = min(10, total)
                    frames[i//2 + 1] = 10 - total
                elif i < len(s) - 2 and s[i+1:i+3].isdigit():
                    total = int(s[i]) + int(s[i+1]) + int(s[i+2])
                    frames[i//2] = min(10, total)
                    frames[i//2 + 1] = 10 - total
    score = sum(frames)
    return score