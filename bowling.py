```python
def bowling_score(rolls):
    score = 0
    roll_index = 0
    for frame in range(10):
        if rolls[roll_index] == 'X':
            score += 30
            roll_index += 1
        elif '/' in rolls[roll_index:roll_index+2]:
            first, second = map(int, rolls[roll_index:roll_index+2].split('/'))
            score += first + second
            roll_index += 2
        else:
            first = int(rolls[roll_index])
            if '+' in rolls[roll_index+1:]:
                second = int(rolls[roll_index+1:].split('+')[0])
                score += first + second
                roll_index += 2
            else:
                score += first + int(rolls[roll_index+1])
                roll_index += 2
    return score