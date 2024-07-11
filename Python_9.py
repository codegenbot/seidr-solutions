from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    if len(numbers) > 1:
        result = [numbers[0]]
        max_so_far = numbers[0]
        for num in numbers[1:]:
            if num > max_so_far:
                max_so_far = num
            result.append(max_so_far)
    else:
        result = numbers.copy() 
    return result