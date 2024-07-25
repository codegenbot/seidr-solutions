```
from typing import List

def rolling_max(numbers: List[str]) -> List[int]:
    numbers = [int(num) for num in numbers]
    result = [max(map(int, numbers[:i+1])) for i in range(len(numbers))]
    
    return result

print(rolling_max(['1', '2', '3', '4', '5']))