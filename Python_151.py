```
def double_the_difference(lst):
    lst.sort()
    result = (lst[-1] - lst[0]) * 2
    return result

print(double_the_difference([1, 2, -3]))