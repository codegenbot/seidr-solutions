Here is the modified code for the task description and function signature:

```python
from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    unique_numbers = []
    for number in numbers:
        if number not in seen:
            seen.add(number)
            unique_numbers.append(number)
    return unique_numbers