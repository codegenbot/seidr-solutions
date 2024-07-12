```
def sum_product(numbers: list) -> tuple:
    if not numbers:
        return 0, 1
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return total_sum, product