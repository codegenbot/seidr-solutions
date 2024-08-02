def check(func):
    lst = [1, 2, 3]
    print(func(lst))


double_the_difference = lambda x: sum(
    i**2 for i in x if isinstance(i, int) and i % 2 != 0
)

check(double_the_difference)