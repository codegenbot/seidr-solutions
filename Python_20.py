def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(
        sorted((min(numbers), max(numbers)))
        if len(set(numbers)) == 1
        else min(
            ((a, b) for a in numbers for b in numbers if a != b),
            key=lambda x: abs(x[0] - x[1]),
        )[0]
    )