```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, int) and (num % 3 == 0 or num % 4 == 0):
            if num % 3 == 0:
                total += num ** 2
            else:
                total += num ** 3
    return total