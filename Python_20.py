```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = [numbers[0], numbers[1]]
    min_diff = abs(closest[1] - closest[0])
    
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i+1] - numbers[i])
        if diff < min_diff:
            min_diff = diff
            closest = [numbers[i], numbers[i+1]]
            
    return tuple(sorted(closest))