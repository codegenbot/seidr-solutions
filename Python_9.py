from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = [numbers[0]]
    max_so_far = numbers[0]
    
    for num in numbers[1:]:
        if num > max_so_far:
            max_so_far = num
        result.append(max_so_far)
        
    return result

print(rolling_max([1, 2, 3, 4, 5]))