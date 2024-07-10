def check(lst, func):
    return func(lst)


print(check([1, 2, 3], lambda x: double_the_difference(x)))