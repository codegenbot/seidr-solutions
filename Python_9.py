def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    curr_max = float('-inf')
    
    for num in numbers:
        curr_max = max(curr_max, num)
        max_numbers.append(curr_max)
    
    return max_numbers