```
def double_the_difference(numbers):
    total = sum(i**2 for i in numbers if isinstance(i, int) and i >= 0)
    half_diff = (min([i for i in numbers if i > 0]) + max([i for i in numbers if i > 0])) / 2
    return abs(sum(i for i in numbers if i > 0) - 2 * half_diff)

print(double_the_difference([1, 3, 5]))