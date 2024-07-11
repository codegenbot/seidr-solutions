def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1

    for num in numbers:
        total_sum += num
        product *= num if product != 1 else 1

    return total_sum, product if total_sum != 0 else 1