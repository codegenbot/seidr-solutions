def sum_product(numbers: list[int]) -> list[int]:
    if not numbers:
        return [0, 1]
    else:
        return [sum(numbers), math.prod(numbers)]