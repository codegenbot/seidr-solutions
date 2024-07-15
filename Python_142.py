```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and num > 0:
            total += num ** len(str(num))
    return total