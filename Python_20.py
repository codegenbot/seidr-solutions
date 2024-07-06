def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers) - 1):
        pair = (numbers[i], numbers[i + 1])

        if abs(numbers[i] - numbers[i + 1]) < min_diff:
            min_diff = abs(numbers[i] - numbers[i + 1])
            closest_pair = pair

    return tuple(sorted(closest_pair))