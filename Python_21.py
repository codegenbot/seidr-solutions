```
from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    
    if None in numbers:
        print("Program did not receive expected input")
        return None
    elif any(x == y for x, y in zip(numbers, numbers[1:])):
        print("Program did not receive expected input")
        return None
    elif max(numbers) - min(numbers) == 0:
        print("Program did not receive expected input")
        return None
    
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]