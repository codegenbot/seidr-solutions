def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers = sorted(set(numbers))
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(*closest_pair)
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
    return (*sorted(closest_pair),)