def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = min((abs(y - x), (x, y)) for x, y in zip(numbers, numbers[1:]))
    return closest[1]