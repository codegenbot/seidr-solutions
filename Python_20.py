```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest = float('inf')
    result = (numbers[0], numbers[1])
    
    for i in range(len(numbers) - 1):
        distance = numbers[i + 1] - numbers[i]
        if distance < closest:
            closest = distance
            result = (numbers[i], numbers[i + 1])
            
    return result