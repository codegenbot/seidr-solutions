def rolling_max(numbers: List[int]) -> List[int]:
    if not numbers:
        return []
    
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.append(max(result[i-1], numbers[i]))
    
    return result