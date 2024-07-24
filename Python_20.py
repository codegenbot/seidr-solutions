def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    min_diff = float("inf")
    closest_pair = ()
    for i in range(1, len(sorted_numbers)):
        diff = sorted_numbers[i] - sorted_numbers[i - 1]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (sorted_numbers[i - 1], sorted_numbers[i])
    return closest_pair