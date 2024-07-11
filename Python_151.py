```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0) * 2

# Test your function
lst = [int(i) for i in input().split()]
check(double_the_difference(lst))