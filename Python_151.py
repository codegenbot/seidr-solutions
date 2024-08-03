def double_the_difference(numbers):
    odd_sum = sum(i**2 for i in numbers if isinstance(i, int) and i >= 0 and i % 2 != 0)
    median = sorted([i for i in numbers if isinstance(i, int)])[len(numbers) // 2]
    return abs((median - odd_sum) * 2)


print(double_the_difference([1, 3, 5]))