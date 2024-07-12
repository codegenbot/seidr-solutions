from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

input_strings = input("Enter space-separated strings: ").split(' ')
result = longest(input_strings)
print(result)