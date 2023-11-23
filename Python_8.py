def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_res = 0
    product_res = 1
    for num in numbers:
        sum_res += num
        product_res *= num
    return sum_res, product_res