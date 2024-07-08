from typing import List, Optional

def longest() -> Optional[str]:
    strings = input("Enter space-separated string: ").split()
    if not strings:
        return None
    max_length = 0
    longest_str = ""
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            longest_str = s
    return longest_str

print(longest())