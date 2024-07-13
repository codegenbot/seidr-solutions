def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 1 if not numbers else functools.reduce(operator.mul, numbers))