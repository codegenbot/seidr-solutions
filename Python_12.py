from typing import List, Optional


def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    longest_string = strings[0].strip()
    for string in strings:
        if len(string.strip()) > len(longest_string):
            longest_string = string.strip()
    return longest_string


input_str = input("Enter comma-separated strings: ")
strings = input_str.split(",")
strings = [s.strip() for s in strings]
result = longest(strings)
print(result)