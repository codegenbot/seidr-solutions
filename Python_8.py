Here is the completed code:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if len(numbers) == 0:
        return 0, 1
    return sum(numbers), math.prod(numbers)