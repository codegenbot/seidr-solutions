def find_closest_elements(numbers: list[float]) -> tuple[float, float]:
    return min((abs(x - y), x, y) for x in numbers for y in numbers if x != y)