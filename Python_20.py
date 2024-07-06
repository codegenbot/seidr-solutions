def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = min(range(len(numbers) - 1), key=lambda i: (numbers[i + 1] - numbers[i]))
    return numbers[closest], numbers[closest + 1]