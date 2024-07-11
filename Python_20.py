def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return tuple(sorted((i, j) for i, j in zip(numbers, numbers[1:]) if i == j)[-1])