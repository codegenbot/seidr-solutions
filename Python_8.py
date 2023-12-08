def sum_product(numbers: list) -> Tuple[int, int]:
    if len(numbers) == 0:
        return (0, 1)
    else:
        return (sum(numbers), math.prod(numbers))
