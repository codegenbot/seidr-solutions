```
def double_the_difference(lst):
    return abs(max(lst) - min(lst)) * 2

lst = [1, 3, 5]
print(double_the_difference(lst))