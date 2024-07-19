Here is the solution:

def sum_product(numbers: List[int]) -> Tuple[int, int]:
    return (sum(numbers), *map(lambda x: x or 1, numbers)) if numbers else ({},)