def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    closest_elements = []
    min_diff = float('inf')
    
    for i in range(len(sorted_numbers) - 1):
        diff = sorted_numbers[i+1] - sorted_numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_elements = [sorted_numbers[i], sorted_numbers[i+1]]
    
    return closest_elements[0], closest_elements[1]