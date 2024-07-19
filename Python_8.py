```
def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return 0, 1
    total_sum = sum(numbers)
    product = 1
    for number in numbers:
        product *= number
    return total_sum, product