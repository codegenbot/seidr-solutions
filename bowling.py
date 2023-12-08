```python
def calculate_bowling_score(bowls):
    score = 0
    frame = []
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            if len(frame) == 2:
                score += sum(frame)
            if len(frame) == 1:
                score += 10
                frame.append(10)
                continue
            frame = [10]
        elif bowl == '/':
            score += 10 - frame[0]
            frame.append(10 - frame[0])
        elif bowl == '-':
            frame.append(0)
        else:
            frame.append(int(bowl))
            if len(frame) == 2:
                score += sum(frame)
                frame = []
    return score

bowls = input()
print(calculate_bowling_score(bowls))
```