Here is the corrected code:

```
def double_the_difference(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    even_sum = sum(i for i in lst if isinstance(i, int))
    return abs(even_sum - odd_sum)*2

list1 = [1, 2, 3, 4, 5]
print(double_the_difference(list1))