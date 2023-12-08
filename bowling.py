
[PYTHON]
def get_bowling_score(rolls):
    score = 0
    frame = 1
    for i in range(len(rolls)):
        if rolls[i] == 'X':
            score += 10
            frame += 1
        elif rolls[i] == '/':
            score += 10
            frame += 1
        else:
            score += int(rolls[i])
    
    if rolls[-1] == 'X' or rolls[-1] == '/':
        score += int(rolls[-2]) + int(rolls[-3])
    
    return score
[/PYTHON]
```