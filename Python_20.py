def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    diff = [
        (numbers[i + 1] - numbers[i], numbers[i], numbers[i + 1])
        for i in range(len(numbers) - 1)
    ]
    closest = min(diff, key=lambda x: x[0])
    return closest[1], closest[2]