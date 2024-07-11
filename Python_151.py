def check(lst, func):
    return func(lst)

def double_the_difference(lst):
    lst.sort()
    return (max(lst) - min(lst)) * 2

print(check([1, 2, 3], lambda x: double_the_difference(x)))