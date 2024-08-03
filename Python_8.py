def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        if num % 2 == 0:
            total_sum += num
        else:
            product *= num
    return total_sum, product