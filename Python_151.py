```
def double_the_difference(numbers):
    min_val = min(numbers)
    max_val = max(numbers)
    difference = abs(max_val - min_val)
    return difference * 2

print(double_the_difference([1, 2, -3, 4]))