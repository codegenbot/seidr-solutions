```
def double_the_difference(lst):
    return [(x-1)*(x-1) for x in lst]

def check(func):
    lst = [1, 2, 3, 4, 5]
    print(func(lst))