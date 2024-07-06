
def find_closest_elements(numbers: list[float]) -> Tuple[float, float]:
    closest = (None, None)
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < abs(closest[0] - closest[1]):
                closest = (numbers[i], numbers[j])
    return closest