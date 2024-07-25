```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    for num in numbers:
        if not isinstance(num, (int, float)):
            raise ValueError("Input must be a list of numbers")
    if len(numbers) < 2:
        return (0.0, 0.0)
    min_diff = float("inf")
    closest_pair = (0, 0)

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair