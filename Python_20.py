def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    min_diff = float("inf")
    result = (0, 0)
    for i in range(len(sorted_numbers) - 1):
        diff = sorted_numbers[i + 1] - sorted_numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (sorted_numbers[i], sorted_numbers[i + 1])
    return result