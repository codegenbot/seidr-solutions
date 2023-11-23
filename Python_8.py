def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_result = sum(numbers)
    product_result = 1
    for n in numbers:
        product_result *= n
    return (sum_result, product_result)