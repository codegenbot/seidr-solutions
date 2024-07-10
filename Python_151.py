```
```
def double_the_difference(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    return abs(odd_sum - min(lst)) * 2

print(double_the_difference([7, 1]))
```