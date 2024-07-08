def sum_product(numbers: list) -> tuple:
    return (sum(numbers), *numbers) if numbers else (0, 1)