```
def get_score(bowls):
    score = 0
    for bowl in bowls:
        if bowl == 'X':
            score += 10
        elif bowl == '/':
            score += 10
        else:
            score += int(bowl)
    return score
```