```
def sum_squares(lst):
    return sum(int(i)**2 for i in (str(i) for i in lst))


print(sum_squares([1, 2, '3']))