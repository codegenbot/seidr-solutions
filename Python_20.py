def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    smallest_diff = abs(closest_pair[1] - closest_pair[0])
    for i in range(1, len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < smallest_diff:
            smallest_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
    return closest_pair