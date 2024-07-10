def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return (0, 1)
    total_sum = 0
    product = 1
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("Invalid input. Only integers are allowed.")
        total_sum += num
        product *= num
    return (total_sum, product)