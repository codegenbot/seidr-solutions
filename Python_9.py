from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = numbers[0]
    result = [max_sum]
    
    for i in range(1, len(numbers)):
        max_sum = max(max_sum, numbers[i])
        result.append(max_sum)
        
    return result

print(rolling_max([1, 2, 3, 4, 5]))