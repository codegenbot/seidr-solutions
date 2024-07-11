def sum_product(numbers: list[int]) -> tuple[int, int]:
    if not numbers:
        return 0, 1
    return sum(numbers), math.prod(numbers)