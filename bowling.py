```python
def calculate_bowling_score(bowls):
    score = 0
    frame = []

    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if len(frame) == 2:
                score += sum(frame)
                frame = []
        elif bowl == '/':
            frame = [10 - int(frame[0])]
        elif bowl == '-':
            frame.append(0)
        else:
            score += int(bowl)
            if len(frame) == 2:
                score += sum(frame)
                frame = []

    return score

bowls = input()
print(calculate_bowling_score(bowls))
```