Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    if not numbers:
        return 0, 1
    return sum(numbers), eval('*'.join(map(str, numbers)))