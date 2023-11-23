def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers)
    total_product = 1 if len(numbers) == 0 else numbers[0]
    for num in numbers[1:]:
        total_product *= num
    return total_sum, total_product