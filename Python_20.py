def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = float("inf")
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < closest:
            closest = abs(numbers[i] - numbers[i + 1])
            result = (numbers[i], numbers[i + 1])
    return result