```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if num < 0:
            total_sum += abs(num)**2
        else:
            total_sum += num
    return total_sum


print(sum_squares([-1, 4, -3, 9, -10]))