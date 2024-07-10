```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_diff = float('inf')
    result = (numbers[0], numbers[0])
    
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < closest_diff:
            closest_diff = diff
            result = (numbers[i], numbers[i + 1])
    
    return result