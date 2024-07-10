```
def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

def check(lst, func):
    return func(lst)

print(check([1, 2, 3], lambda x: double_the_difference(x)))