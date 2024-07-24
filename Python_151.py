def double_the_difference(numbers):
    return (min(numbers) + max(numbers)) * len([i for i in numbers if isinstance(i, int) and i % 2 != 0])