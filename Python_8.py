```
# This problem requires writing a function that calculates the sum and product of all numbers in a given list.
def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = 0
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product