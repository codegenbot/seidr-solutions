```
def sum_squares(lst):
    total = 0
    for num in lst:
        if isinstance(num, (int, float)):
            total += num ** 2
        else:
            total += sum(map(int, str(num))) ** 2
    return total