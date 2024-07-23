def calculate_average_and_sum(numbers: List[int]) -> Tuple[float, int]:
    if not numbers:
        return float('nan'), 0
    total_sum = sum(numbers)
    average = total_sum / len(numbers)
    return average, total_sum