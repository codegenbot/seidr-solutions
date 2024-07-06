
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers = sorted(numbers)
    closest = (numbers[0], numbers[1])
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < abs(closest[0] - closest[1]):
            closest = (numbers[i], numbers[i + 1])
    return closest