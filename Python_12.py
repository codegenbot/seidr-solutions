from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    
    longest_string = max(strings, key=len)
    return longest_string

input_strings = input().strip().split(",")

result = longest(input_strings)
print(result)