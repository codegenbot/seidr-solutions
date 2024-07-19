```
def bowling_score(frames):
    score = 0
    roll = 0

    while roll < len(frames) - 1:
        parts = frames[roll:roll+3].split('/')
        if len(parts) == 1:
            total = int(parts[0])
        elif len(parts) == 2:
            first, second = parts
            if second == 'X':
                total = 10 + int(first)
            else:
                total = int(first) + int(second)
        else:
            total = 10 + int(parts[0])
        score += total
        roll += 3

    print(score)
print(bowling_score("9-3,5-,7+2,4+,8/3,7/,1/2/X,X/10"))