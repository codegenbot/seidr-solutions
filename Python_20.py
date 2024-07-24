def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return min((x, y) for x in numbers for y in numbers if x < y), max(
        (x, y) for x in numbers for y in numbers if x < y
    )