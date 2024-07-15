def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_total = sum(numbers) if numbers else 0
    product_total = 1
    for num in numbers:
        product_total *= num
    return sum_total, product_total