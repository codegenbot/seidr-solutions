def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), math.prod(numbers) if numbers else 1)