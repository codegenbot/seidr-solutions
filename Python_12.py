from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    user_input = input("Enter a list of strings separated by space or comma: ")
    strings_list = [i.strip() for i in user_input.split(",") if i]
    return max(strings_list, key=len)

longest([])