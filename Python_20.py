def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = min(
        (abs(num - numbers[i - 1]), (num, numbers[i - 1]))
        for i, num in enumerate(numbers)
    )
    return closest[1]