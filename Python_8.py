def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), 1 if not numbers else (lambda x: x if x != 0 else 1)(reduce((lambda x, y: x * y), numbers))