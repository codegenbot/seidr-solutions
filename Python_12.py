from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0]
    for string in strings:
        if len(string) > len(longest_string):
            longest_string = string
    return longest_string

input_strings = input("Enter your desired input strings, separated by spaces: ").split()
result = longest(input_strings)
print(result)