def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    closest_pair = (numbers[0], numbers[1])
    min_diff = abs(closest_pair[1] - closest_pair[0])
    
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i+1] - numbers[i])
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i+1])
            
    return closest_pair

numbers = [1, 2, 3, 4, 5]
print(find_closest_elements(numbers))