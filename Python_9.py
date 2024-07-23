```
def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    
    max_so_far = result = [numbers[0]]
    
    for num in numbers[1:]:
        result.append(max(num, max_so_far[-1]))
        max_so_far = [num] if num > max_so_far[-1] else max_so_far
    
    return result