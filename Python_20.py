def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = [numbers[0], numbers[1]]
    min_diff = abs(closest[1] - closest[0])

    for i in range(1, len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            closest = [numbers[i], numbers[i + 1]]
            min_diff = diff

    return tuple(closest)