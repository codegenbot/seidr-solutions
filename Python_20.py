def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = (numbers[0], numbers[1])
    for i in range(2, len(numbers)):
        if abs(numbers[i] - numbers[i - 1]) < abs(closest[1] - closest[0]):
            closest = (numbers[i - 1], numbers[i])
    return closest