from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    
    longest_string = max(strings, key=len)
    return longest_string

input_strings = []
while (input_string := input("Enter a string (enter 'STOP' to stop): ").strip().upper()) != "STOP":
    input_strings.append(input_string)

result = longest(input_strings)
print(result)