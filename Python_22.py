Here is the corrected code:

```python
from typing import List

def filter_integers() -> List[int]:
    values = []
    while True:
        value = input("Enter an integer (or 'stop' to finish): ")
        if value.lower() == 'stop':
            break
        try:
            values.append(int(value))
        except ValueError as e:
            print(f"Invalid input. Please enter a valid integer: {str(e)}")
    return values