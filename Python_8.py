def sum_product(numbers):
    if not numbers:
        return (0, 1)
    else:
        return (sum(numbers), math.prod(numbers))