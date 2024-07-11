def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    closest_pair = (None, None)

    for i in range(len(numbers) - 1):
        pair = (numbers[i], numbers[i + 1])
        diff = abs(pair[0] - pair[1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = pair

    return tuple(sorted(closest_pair))