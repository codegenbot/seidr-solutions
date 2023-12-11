```python
def get_score(bowls):
    score = 0
    for i in range(len(bowls)):
        if bowls[i] == 'X':
            score += 10
        elif bowls[i] == '/':
            score += 10 - int(bowls[i-1])
        else:
            score += int(bowls[i])
        # Handle case where a strike is followed by a spare
        if i < len(bowls) - 2 and bowls[i+1] == '/':
            score += int(bowls[i+2])
    return score
```