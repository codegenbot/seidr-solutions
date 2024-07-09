from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_str = max(strings, key=len)
    return max(filter(lambda x: len(x) == len(longest_str), strings))

input_strings = input("Enter a list of strings separated by spaces: ").split()
result = longest(input_strings)
print(result)