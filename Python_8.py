Here is the completed code:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), *map(lambda x: x, numbers) if numbers else (0, 1))