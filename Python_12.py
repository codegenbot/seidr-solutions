from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

input_string = input("Enter space-separated strings: ")
input_strings = input_string.split()

result = longest(input_strings)

print(result)