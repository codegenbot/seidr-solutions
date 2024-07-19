```
def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(numbers) - 1):
        pair = (numbers[i], numbers[i+1])
        diff = abs(pair[0] - pair[1])
        
        if diff < closest_diff:
            closest_diff = diff
            closest_pair = pair
            
    return closest_pair