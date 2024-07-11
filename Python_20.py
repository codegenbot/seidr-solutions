def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    return min(
        (j, k)
        for i, j in enumerate(numbers)
        for k in numbers[i + 1 :]
        if abs(j - k) == min(abs(x - y) for x in numbers for y in numbers if x != y),
        default=(numbers[0], numbers[1]),
    )