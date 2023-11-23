def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    min_distance = float('inf')
    closest_pair = None
    for i in range(len(sorted_numbers) - 1):
        distance = abs(sorted_numbers[i] - sorted_numbers[i + 1])
        if distance < min_distance:
            min_distance = distance
            closest_pair = (sorted_numbers[i], sorted_numbers[i + 1])
    return closest_pair