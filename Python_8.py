Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum()
    product = 1
    for num in numbers:
        total_sum += num
        product *= num
    return total_sum, product