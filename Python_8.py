def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum_of_numbers = sum(numbers)
    product_of_numbers = 1
    for number in numbers:
        product_of_numbers *= number
    return sum_of_numbers, product_of_numbers