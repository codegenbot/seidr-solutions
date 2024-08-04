def double_the_difference(x):
    return sum(y**2 for y in x if y % 2 != 0 and y >= 0 and isinstance(y, int)) * 2 if x else 0

result = double_the_difference([3, 5, 7, -2, 9])
print(result)