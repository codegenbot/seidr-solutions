def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_difference = numbers[1] - numbers[0]
    min_elements = (numbers[0], numbers[1])
    for i in range(1, len(numbers) - 1):
        difference = numbers[i+1] - numbers[i]
        if difference < min_difference:
            min_difference = difference
            min_elements = (numbers[i], numbers[i+1])
    return min_elements