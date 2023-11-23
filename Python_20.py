def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    closest_pair = (sorted_numbers[0], sorted_numbers[1])
    for i in range(1, len(sorted_numbers) - 1):
        pair = (sorted_numbers[i], sorted_numbers[i+1])
        if abs(pair[0] - pair[1]) < abs(closest_pair[0] - closest_pair[1]):
            closest_pair = pair
    return closest_pair