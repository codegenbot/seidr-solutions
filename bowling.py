```
def bowling(score):
    score = [int(x) if x.isdigit() else 10 for x in score]
    return sum(max(0, i) + max(0, min(i, 10)) if k == '/' else k for i, (k, j) in enumerate(zip(score, score[1:]))) if len(score) > 0 else 0