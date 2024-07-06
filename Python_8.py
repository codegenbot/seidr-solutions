def sum_product(numbers: typing.List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    else:
        return sum(numbers), math.prod(numbers)