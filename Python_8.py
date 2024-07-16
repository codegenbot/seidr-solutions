def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return 0, 1
    else:
        return sum(numbers), functools.reduce(lambda x, y: x * y, numbers)