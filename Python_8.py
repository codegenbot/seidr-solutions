def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_numbers = sum(numbers)
    product_numbers = 1
    for num in numbers:
        product_numbers *= num
    return (sum_numbers, product_numbers)