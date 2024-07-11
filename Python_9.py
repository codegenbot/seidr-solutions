from typing import List

def rolling_max(input_str: str) -> List[int]:
    numbers = [int(num) for num in input_str.split()]
    result = [max(numbers[:i+1]) for i in range(len(numbers))]
    return result