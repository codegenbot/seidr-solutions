Here is the completed code:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), functools.reduce(lambda x, y: x * y, numbers, 1))