def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_val = sum(numbers)
    prod_val = 1
    for num in numbers:
        prod_val *= num
    return sum_val, prod_val