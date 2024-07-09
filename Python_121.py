```
def sum_odd(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and num % 2 != 0:
            total_sum += num
    return total_sum