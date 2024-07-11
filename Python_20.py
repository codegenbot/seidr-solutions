def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted(set(numbers)).pop(), sorted(set(numbers)).pop())