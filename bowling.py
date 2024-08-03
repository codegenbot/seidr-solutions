def bowling(score):
    score = [int(i) if i.isdigit() else 10 for i in score]
    return sum([max(1, k // 10) + min(k % 10, 10) for k in score])