def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    total = 1
    product = 1
    for num in numbers:
        total += num
        product *= num
    return total, product