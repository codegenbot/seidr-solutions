```python
from typing import List

def has_close_elements(numbers: list[float], threshold: float) -> bool:
    """Docstring explaining the function"""
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False

if __name__ == "__main__":
    print(has_close_elements([1.0, 2.0, 3.0], 1.0))