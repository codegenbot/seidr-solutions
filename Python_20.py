```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float('inf')
    closest_pair = ()
    
    numbers.sort()
    
    for i in range(1, len(numbers)):
        diff = numbers[i] - numbers[i-1]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i-1], numbers[i])
            
    return closest_pair