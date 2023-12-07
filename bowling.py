```python
def get_score(bowls):
    score = 0
    for i, bowl in enumerate(bowls):
        if bowl == 'X' or bowl == '/':
            score += 10
        else:
            score += int(bowl)
    return score
```