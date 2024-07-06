def calculate_average(numbers: List[int]) -> float:
    if not numbers:
        return 0
    return sum(numbers) / len(numbers)