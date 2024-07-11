```
def double_the_difference(lst):
    difference = max(lst) - min(lst)
    double_diff = difference * 2
    return double_diff

def check(func):
    lst = [int(x) for x in input("Enter a list of numbers separated by space: ").split()]
    result = func(lst)
    print("Double the difference is:", result)

check(double_the_difference)