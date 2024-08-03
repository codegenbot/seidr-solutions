Here is the completed code:

Here is the problem: Calculate the sum and product of all integers in a given list of integers.

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return (0, 1)
    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num
    return (total_sum, product)