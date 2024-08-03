def double_the_sum(numbers):
    positive_numbers = [num for num in numbers if isinstance(num, int) and num > 0]
    return (sum(positive_numbers) ** 2) - sum(i**2 for i in numbers if isinstance(i, int) and i > 0)