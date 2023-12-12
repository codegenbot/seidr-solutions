```python
def calculate_score(bowls):
    score = 0
    num_bowls = len(bowls)

    for i in range(num_bowls):
        if bowls[i] == 'X':
            score += 10
            if i + 2 < num_bowls:
                score += int(bowls[i + 1]) + int(bowls[i + 2])
        elif bowls[i] == '/':
            score += 10 - int(bowls[i - 1])
            if i + 1 < num_bowls:
                score += int(bowls[i + 1])
        else:
            score += int(bowls[i])
    
    return score

bowls = input()
print(calculate_score(bowls))
```