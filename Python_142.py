def check(x):
    return "yes" if x > 10 else "no"


def sum_squares(lst):
    return sum(i**2 for i in lst)


print(check(sum_squares([1, 2, 3, 11, 12])))