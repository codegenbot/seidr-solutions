
def sum_product(numbers: list[int]) -> tuple[int, int]:
    import math
    if not numbers:
        return 0, 1
    else:
        return sum(numbers), math.prod(numbers)