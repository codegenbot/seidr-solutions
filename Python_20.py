def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers = sorted(set(numbers))  # Remove duplicates and sort
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(numbers[1] - numbers[0])

    for i in range(len(numbers) - 1):
        diff = abs(numbers[i + 1] - numbers[i])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return tuple(sorted(closest_pair))