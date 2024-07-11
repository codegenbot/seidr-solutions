```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if abs(num ** 0.5) == int(abs(num ** 0.5)):
            total_sum += num ** 2
        else:
            total_sum += num
    return total_sum