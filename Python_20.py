def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = numbers[1] - numbers[0]
    min_pair = (numbers[0], numbers[1])
    for i in range(1, len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            min_pair = (numbers[i], numbers[i + 1])
    return min_pair