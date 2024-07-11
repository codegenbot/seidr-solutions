def check(f):
    print(f([1, 2, 3]))

def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

check(double_the_difference)