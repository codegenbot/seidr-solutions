def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    init_sum = 0
    product = 1
    for num in numbers:
        init_sum += num
        product *= num
    return (init_sum, product)