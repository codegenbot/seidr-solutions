def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    closest_pair = min((abs(a - b), a, b) for a in numbers for b in numbers if a < b)
    return sorted(closest_pair[1:])