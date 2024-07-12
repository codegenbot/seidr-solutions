Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(filter(None, numbers))
    product = 1
    for num in filter(None, numbers):
        product *= num
    return total_sum, product