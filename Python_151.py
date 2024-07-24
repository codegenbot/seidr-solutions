```
def double_the_difference(numbers):
    total = sum(i**2 for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
    half_diff = (min(numbers) + max(numbers)) / 2
    return abs(total - half_diff * len([i for i in numbers if i >= 0]))

print("{} is the result".format(double_the_difference([1, 3, 5])))