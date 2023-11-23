def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    smallest_difference = numbers[1] - numbers[0]
    
    for i in range(1, len(numbers) - 1):
        difference = numbers[i+1] - numbers[i]
        if difference < smallest_difference:
            closest_pair = (numbers[i], numbers[i+1])
            smallest_difference = difference

    return closest_pair