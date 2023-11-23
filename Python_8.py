def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_value = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return sum_value, product