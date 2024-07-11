from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_sum = [0] * len(numbers)
    current_max = numbers[0]
    
    for i in range(len(numbers)):
        if i == 0:
            max_sum[i] = current_max
        else:
            max_sum[i] = max(current_max, sum([numbers[j] for j in range(i+1)]))
            current_max = max_sum[i]
            
    return max_sum