Here is the completed code:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    total_sum = sum(numbers) if numbers else 0
    total_product = 1
    for number in numbers:
        total_product *= number
    return total_sum, total_product