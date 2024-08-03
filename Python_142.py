```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and num >= 0:
            total_sum += num ** 2
        elif isinstance(num, str) and num.isdigit():
            total_sum += int(num) ** 2
    return total_sum