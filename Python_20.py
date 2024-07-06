```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers = sorted(set(numbers))
    closest_diff = float('inf')
    result = ()
    
    for i in range(len(numbers) - 1):
        diff = numbers[i+1] - numbers[i]
        if diff < closest_diff:
            closest_diff = diff
            result = (numbers[i], numbers[i+1])
    
    return result