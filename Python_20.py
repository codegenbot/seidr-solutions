def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_difference = abs(numbers[0] - numbers[1])
    
    for i in range(len(numbers) - 1):
        current_difference = abs(numbers[i] - numbers[i+1])
        if current_difference < min_difference:
            min_difference = current_difference
            closest_pair = (numbers[i], numbers[i+1])
    
    return closest_pair