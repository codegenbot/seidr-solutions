```
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    max_length = 0
    longest_str = None
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            longest_str = s
    return longest_str

if __name__ == '__main__':
    strings = input("Enter comma-separated list of strings (e.g., 'hello,world'): ").split(',')
    result = longest([s.strip() for s in strings])
    print(result)