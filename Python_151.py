```
def double_the_difference(lst):
    lst.sort()
    diff = lst[-1] - lst[0]
    return diff * 2

print(double_the_difference([1, 2, -3, 4]))