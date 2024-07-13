```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2

lst = [1, 3, -2, 4]
odd_sum = double_the_difference([1, 3, -2, 4])
print(odd_sum)