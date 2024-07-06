```
def double_the_difference(lst):
    result = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return result

odd_sum = 5
check(double_the_difference([1, 2, 3]))