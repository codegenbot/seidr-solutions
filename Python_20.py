def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    sorted_numbers = sorted(numbers)
    closest_diff = float('inf')
    closest_nums = ()
  
    for i in range(len(sorted_numbers) - 1):
        diff = abs(sorted_numbers[i] - sorted_numbers[i+1])
        if diff < closest_diff:
            closest_diff = diff
            closest_nums = (sorted_numbers[i], sorted_numbers[i+1])
            
    return closest_nums