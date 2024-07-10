```
def cut_vector(lst):
    min_diff = float("inf")
    split_idx = 0
    sum1, sum2 = 0, 0

    for i in range(1, len(lst)):
        sum1 += lst[i-1]
        sum2 += lst[i]

        if abs(sum1 - sum2) < min_diff:
            min_diff = abs(sum1 - sum2)
            split_idx = i
            
    return lst[:split_idx], lst[split_idx:]