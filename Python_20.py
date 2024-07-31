def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted((a, b) for a in numbers for b in numbers if a < b)[:1])