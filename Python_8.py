def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers) if numbers else 0
    product_result = 1 if not numbers else math.prod(numbers)
    return sum_result, product_result