```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, list) and len(num) == 3:
            total_sum += num[0]**2 + num[1]**2 + num[2]**2
        else:
            total_sum += num**2
    return total_sum