def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if numbers:
        return (sum(numbers), math.prod(numbers))
    else:
        return (0, 1)