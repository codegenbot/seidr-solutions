Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return sum(numbers), prod(numbers) if numbers else (0, 1)