def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_numbers = sum(numbers) if numbers else 0
    product = 1
    for num in numbers:
        product *= num
    return sum_numbers, product