def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    return sum(numbers), functools.reduce(lambda x, y: x * y, numbers)