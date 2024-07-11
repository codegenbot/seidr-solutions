```python
def bowling_score(bowling):
    score = 0
    strike_count = 0
    frame = 1
    for i in range(len(bowling)):
        if bowling[i] == "X":
            if frame < 10:  
                strike_count += 1
            else:
                score += 10
        elif bowling[i].isdigit():
            total = int(bowling[i])
            j = i + 1
            while j < len(bowling) and bowling[j].isdigit():
                total += int(bowling[j])
                j += 1
            if total == 10:
                score += 10
            else:
                score += total
        frame += 1
    score -= strike_count * 20  
    return score