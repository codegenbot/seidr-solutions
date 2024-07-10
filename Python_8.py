def calculate_average_and_median(numbers: List[int]) -> Tuple[float, float]:
    if not all(isinstance(x, int) for x in numbers):
        return "Error: Input must be a list of integers"

    average = sum(numbers) / len(numbers)
    numbers.sort()
    median = (
        numbers[len(numbers) // 2]
        if len(numbers) % 2 != 0
        else (numbers[len(numbers) // 2 - 1] + numbers[len(numbers) // 2]) / 2
    )
    return (average, median)