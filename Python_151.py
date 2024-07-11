def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and 0 <= i <= abs(i) and i % 2 == 0)

result = double_the_difference([1, 2, -3, 4, -5])
print(result)