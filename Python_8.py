
def sum_product(numbers: typing.List[int]) -> Tuple[int, int]:
    return (sum(numbers), prod(numbers)) if numbers else (0, 1)