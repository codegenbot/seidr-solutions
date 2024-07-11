def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return min((a, b) for a in numbers for b in numbers if a < b), max(min((a, b) for a in numbers for b in numbers if a < b)))