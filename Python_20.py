def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) < 2:
        return (0.0, 0.0)

    numbers.sort()
    return min((a, b) for a, b in zip(numbers, numbers[1:]), key=lambda x: abs(x[0] - x[1]))