def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_elements = (numbers[0], numbers[1])
    for i in range(len(numbers) - 1):
        if numbers[i+1] - numbers[i] < closest_elements[1] - closest_elements[0]:
            closest_elements = (numbers[i], numbers[i+1])
    return closest_elements