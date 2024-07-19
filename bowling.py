```python
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 30
            i += 1
            if i < len(frames) and frames[i] == 'X':
                score += 30
                i += 1
            elif i < len(frames):
                rolls = list(map(int, frames[i].replace("/","").split()))
                score += sum(rolls)
                i += 1
        elif frames[i] == '/':
            score += 10
            i += 1
            if i < len(frames) and frames[i].isdigit():
                score += int(frames[i])
                i += 1
        else:
            first_roll = int(frames[i].replace(" ",""))
            if i < len(frames) - 1 and frames[i+1] == 'X':
                second_roll = 10
                score += first_roll + second_roll
                i += 2
            elif i < len(frames) - 1:
                score += first_roll + int(frames[i+1].replace(" ",""))
                i += 2
    return score

print(bowling_score("X|X|7/4|5|6|8-3|9-0|10|-5|-10"))