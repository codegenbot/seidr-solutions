Here is the completed code:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return sum(numbers), math.prod(numbers) if numbers else (0, 1)