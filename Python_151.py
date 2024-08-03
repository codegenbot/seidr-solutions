```
def double_the_difference(lst):
    total = 0
    count = 0
    for i in lst:
        if isinstance(i, int) and i > 0:
            total += (i * 2 - sum(1 for j in lst if isinstance(j, int) and j > 0)) ** 2
            count += 1
    return total / count if count != 0 else 0