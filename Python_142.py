```
def sum_squares(lst):
    return sum(i**2 for i in (int(x) for x in lst))


print(sum_squares([1, 2, '3']))