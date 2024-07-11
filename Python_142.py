```
def sum_squares(lst):
    total_sum = 0
    for num in lst:
        if isinstance(num, int) and (num > 0).all() and ((num % i == 0 for i in range(1, int(round(num**0.5)) + 1))) or (num < 0):
            total_sum += num ** 2
        else:
            total_sum += num
    return total_sum

print(sum_squares([1, 4, -3, 9, -10]))