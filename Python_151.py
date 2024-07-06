lst = [1, -2, 3, 4, -5]
odd_sum = sum(i for i in lst if isinstance(i, int) and i > 0)
print(2*odd_sum)