```
def check(lst, f):
    print(f(lst))

def double_the_difference(x, y):
    lst = sorted([x, y])
    return (lst[1] - lst[0]) * 2

check([1, 2], lambda: double_the_difference(1, 2))