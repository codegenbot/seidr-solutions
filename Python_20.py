def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_diff = float("inf")
    closest_pair = (None, None)

    for i in range(1, len(numbers)):
        diff = numbers[i] - numbers[i - 1]
        if abs(diff) < abs(closest_diff):
            closest_diff = diff
            closest_pair = (numbers[i - 1], numbers[i])

    return closest_pair