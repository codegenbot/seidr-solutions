def sum_product(numbers: List[int]) -> Tuple[int, int]:
    the_sum = sum(numbers)
    the_product = 1
    for num in numbers:
        the_product *= num
    return the_sum, the_product