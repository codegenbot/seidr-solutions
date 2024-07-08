```
from typing import List

def rescale_to_unit():
    numbers = list(map(float, input("Enter a list of floating point numbers separated by space: ").split()))
    min_val = min(numbers)
    max_val = max(numbers)
    
    if max_val - min_val == 0:
        return [0 for _ in numbers]
        
    return [(x - min_val) / (max_val - min_val) for x in numbers]

print(rescale_to_unit())