```
from typing import List


def concatenate(strings: List[str]) -> str:
    result = ""
    for string in strings:
        if not isinstance(string, str):  
            return "Invalid input. Only strings are accepted."
        result += string
    return result