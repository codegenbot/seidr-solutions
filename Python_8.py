def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_value = 0
    product_value = 1
    for num in numbers:
        sum_value += num
        product_value *= num
    return sum_value, product_value