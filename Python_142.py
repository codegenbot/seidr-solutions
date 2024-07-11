```
def sum_squares(lst):
    total = 0
    for num in lst:
        if num % 4 == 0 and num % 6 == 0:
            total += num**2
        else:
            total += num
    return total```