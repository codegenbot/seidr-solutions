```
def double_the_difference(lst):
    return (sum(i for i in lst) ** 2 - sum(i**2 for i in lst if isinstance(i, int) and i > 0)) / abs(sum(i for i in lst))

check(double_the_difference, [1, 3, -5])