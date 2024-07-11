def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    result = ()
    for i in range(len(numbers) - 1):
        if numbers[i + 1] - numbers[i] < min_diff:
            min_diff = numbers[i + 1] - numbers[i]
            result = (numbers[i], numbers[i + 1])
    return result