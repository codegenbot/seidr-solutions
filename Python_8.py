Here is the completed code:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    return sum(numbers), math.prod(numbers)