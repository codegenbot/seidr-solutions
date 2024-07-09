from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers = set(map(round, numbers))  
    if len(numbers) != len(set(str(num) for num in numbers)):  
        return True
    return False