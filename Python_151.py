def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)

lst = [1, 2, 3]
print(double_the_difference(lst))