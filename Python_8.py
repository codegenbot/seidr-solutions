def sum_product(numbers: List[int]) -> Tuple[int, int]:
    sum = 0
    product = 1
    for number in numbers:
        sum += number
        product *= number
    return sum, product