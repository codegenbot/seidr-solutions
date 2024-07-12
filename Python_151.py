```
def check(num1, num2):
    return double_the_difference([num1, num2])

def double_the_difference(lst):
    min_val = min(lst)
    max_val = max(lst)
    avg_diff = (max_val - min_val) / 2
    return abs(sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0) - 2 * avg_diff)