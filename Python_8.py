Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return (0, 1)
    else:
        total_sum = 0
        total_product = 1
        for number in numbers:
            total_sum += number
            total_product *= number
        return (total_sum, total_product)