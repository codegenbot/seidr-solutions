```
lst = [1, -2, 3, 4, -5]
odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
print(odd_sum * 2)