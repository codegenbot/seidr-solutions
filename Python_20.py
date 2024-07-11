def find_closed_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) <= 1:
        return (0.0, 0.0)

    min_diff = float('inf')
    left = right = 0

    for i in range(1, len(numbers)):
        diff = numbers[i] - numbers[i-1]
        if diff > 0 and diff < min_diff:
            min_diff = diff
            left, right = numbers[i-1], numbers[i]

    return (left, right)