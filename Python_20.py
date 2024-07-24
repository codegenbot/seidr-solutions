def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(
        sorted(set(numbers))[:1]
        + sorted([i for i in numbers if list(set(numbers)).count(i) > 1])[:2]
    )