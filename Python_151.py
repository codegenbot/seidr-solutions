def double_the_difference():
    lst = [1, 3, 5, 2, 7]
    return sum(x**2 for x in lst if x > 0 and type(x) == int and x % 2 != 0) * 2

print(double_the_difference())