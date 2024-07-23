```
def sum_squares(lst):
    total_sum = 0
    for i, num in enumerate(lst):
        if i % 3 == 0 and i % 4 != 0:
            total_sum += num ** 2
        elif i % 4 == 0 and i % 3 != 0:
            if i < len(lst) - 1: 
                total_sum += num ** 3 + lst[i+1]
    return total_sum