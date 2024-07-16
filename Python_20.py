```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(numbers[1] - numbers[0])
    
    for i in range(2, len(numbers)):
        diff = abs(numbers[i] - numbers[i-1])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i-1], numbers[i])
            
    return closest_pair