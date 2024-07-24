```
def calculate_average_and_variance(numbers: List[int]) -> Tuple[float, float]:
    if not isinstance(numbers, list):
        raise ValueError("Input must be a list")
    for num in numbers:
        if not isinstance(num, int):
            raise ValueError("List elements must be integers")

    total_sum = sum(numbers)
    average = total_sum / len(numbers)

    total_square_diff = 0
    for num in numbers:
        square_diff = (num - average) ** 2
        total_square_diff += square_diff

    variance = total_square_diff / len(numbers)

    return average, variance