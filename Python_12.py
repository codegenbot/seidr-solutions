from typing import Optional

def longest(strings: str) -> Optional[str]:
    if not strings:
        return None
    string_list = strings.split()  # Split the input string into a list of strings
    return max(string_list, key=len)