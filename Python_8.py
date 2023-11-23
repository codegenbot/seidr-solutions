def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_total = sum(numbers)
    product_total = 1
    for number in numbers:
        product_total *= number
    return sum_total, product_total