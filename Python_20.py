def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted((abs(i - j) for i in numbers for j in numbers if i != j))[:2])