def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return 0, 1
    total = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return total, product