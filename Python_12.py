from typing import List, Optional
def longest(strings: List[str]) -> Optional[str]:
    from typing import List, Optional
    user_input = input("Enter a list of strings: ")
    strings = [string.strip() for string in user_input.split(",")]
    if not strings:
        return None
    max_length = 0
    longest_str = ""
    for s in strings:
        if len(s) > max_length:
            max_length = len(s)
            longest_str = s
    return longest_str