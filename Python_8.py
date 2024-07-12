def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    total_product = 1
    for num in numbers:
        total_sum += num
        total_product *= num
    return (
        total_sum if len(numbers) > 0 else 0,
        total_product if len(numbers) > 0 else 1,
    )