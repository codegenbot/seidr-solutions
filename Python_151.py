def check(double_the_difference, lst):
    return double_the_difference(lst)

# Your solution here
def double_the_difference(lst):
    return 2 * sum(x**2 for x in lst if x > 0 and x % 2 != 0)
```