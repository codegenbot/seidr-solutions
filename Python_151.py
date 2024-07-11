def check(lst, f):
    print(f(lst))

def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

check([1, 2, 3], double_the_difference)