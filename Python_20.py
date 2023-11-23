def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    min_diff = sorted_numbers[1] - sorted_numbers[0]
    closest_elements = (sorted_numbers[0], sorted_numbers[1])
    for i in range(1, len(sorted_numbers) - 1):
        diff = sorted_numbers[i+1] - sorted_numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_elements = (sorted_numbers[i], sorted_numbers[i+1])
    return closest_elements