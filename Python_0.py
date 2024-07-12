```
from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    for num in set(numbers):
        count = 0
        for n in numbers:
            if abs(num - n) <= threshold:
                count += 1
        if count > 1:
            return False
    return True

numbers = [1.0, 1.1, 2.2]
threshold = 0.5
print(has_close_elements(numbers, threshold))