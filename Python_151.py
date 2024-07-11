```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0) * 2

# Test your function
odd_sum = 15
lst = [int(i) for i in input().split()]
print(double_the_difference(lst))