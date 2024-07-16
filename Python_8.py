Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return sum(numbers), functools.reduce(lambda x, y: x * y, numbers, 1) if numbers else (0, 1)