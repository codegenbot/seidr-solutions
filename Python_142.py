```
import math

def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if math.isqrt(num) ** 2 == num:
            total_sum += num ** 2
        else:
            total_sum += num
    return total_sum