```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, list):
            total += sum([i ** 2 for i in num])
        else:
            total += num ** 2
    return total