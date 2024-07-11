```
def double_the_difference(lst):
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

def check(func):
    lst = [1,3,5,6]
    result = func(lst)
    print("Input:", lst)
    print("Output:", result)

check(double_the_difference())