def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_num = sum(numbers)
    product_num = 1
    for num in numbers:
        product_num *= num
    return sum_num, product_num