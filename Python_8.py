```
def sum_of_squares_and_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        square = num ** 2
        total_sum += square + num
        product *= num
    return total_sum, product if product != 0 else 1