```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and isinstance(num, float):
            total_sum += num ** 2
        elif isinstance(num, str):
            try:
                num = float(num)
                total_sum += num ** 2
            except ValueError:
                pass
    return total_sum