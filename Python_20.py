def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = float('inf')
    result = ()
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i+1])
        if diff < closest:
            closest = diff
            result = (numbers[i], numbers[i+1])
    return result