def double_the_difference(numbers):
    total = sum(i**2 for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
    half_diff = (min(numbers) + max(numbers)) / 2
    return abs(total - half_diff * len([i for i in numbers if i >= 0]))
lst = [1, 3, 5]
print(double_the_difference(lst))