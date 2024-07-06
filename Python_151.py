```
def double_the_difference(lst):
    min_val = min(lst)
    max_val = max(lst)
    diff = abs(max_val - min_val)
    return diff * 2

print(double_the_difference([1, 2, -3]))