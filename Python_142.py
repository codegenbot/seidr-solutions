```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and (num % 3 == 0 or num % 5 == 0):
            total_sum += num ** 2
        elif isinstance(num, float) and (num % 3 == 0 or num % 5 == 0):
            total_sum += round(num) ** 2
    return total_sum