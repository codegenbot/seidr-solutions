def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted(set(numbers))[:1] + sorted(set(numbers))[1:1])