from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    
    longest_string = max(strings, key=len)
    return longest_string

input_strings = [
    'input string 1',
    'input string 2',
    'input string 3',
    # add more input strings if necessary
]

result = longest(input_strings)
print(result)