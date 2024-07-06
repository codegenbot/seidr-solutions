```
def double_the_difference(lst):
    return abs(max(lst) - min(lst)) * 2

print(double_the_difference([1, 2, -3, 4]))