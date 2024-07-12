def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers) if numbers else 0
    prod_result = 1
    for num in numbers:
        prod_result *= num
    return sum_result, prod_result