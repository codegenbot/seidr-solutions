def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted((x, y) for x in numbers for y in numbers if x < y)[:1])