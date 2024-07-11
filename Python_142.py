```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, (int, float)):
            total_sum += num ** 2
        else:
            raise ValueError("Invalid input")
    return total_sum