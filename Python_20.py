def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = min((abs(i - j), i, j) for i in numbers for j in numbers if i != j)
    return (closest[1], closest[1] + (closest[0] // abs(closest[1] - closest[1] - 1)))