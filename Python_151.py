```
def double_the_difference(lst):
    lst.sort()
    return (lst[-1] - lst[0]) * 2

print(double_the_difference([1, 2, 3]))