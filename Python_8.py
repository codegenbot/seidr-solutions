def sum_product(numbers):
    if len(numbers) < 2:
        return None
    return sum(numbers), numbers[0]