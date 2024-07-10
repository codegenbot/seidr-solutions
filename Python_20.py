def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted((num, i) for i, num in enumerate(numbers))
    min_diff = float("inf")
    closest_pair = (None, None)

    for i in range(len(sorted_numbers) - 1):
        diff = abs(sorted_numbers[i][0] - sorted_numbers[i + 1][0])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (sorted_numbers[i][0], sorted_numbers[i + 1][0])

    return tuple(closest_pair)