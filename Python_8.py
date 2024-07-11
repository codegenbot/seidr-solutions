```
def sum_product(numbers: list) -> tuple:
    if not numbers:
        return 0, 1
    return sum(numbers), math.prod(numbers)