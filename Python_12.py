```python
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_len = max(len(s) for s in strings)
    if max_len == 0:
        return None
    return max((s for s in strings if len(s) == max_len), key=len)

num_strings = int(input("Enter the number of strings: \n"))
strings = [input("Please enter a string: \n") for _ in range(num_strings)]
print(longest(strings))